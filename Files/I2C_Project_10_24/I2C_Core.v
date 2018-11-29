`timescale 1ns / 1ps
//*****************************************************************************//
//    This document contains information proprietary to the                    //
//    CSULB student that created the file - any reuse without                  //
//    adequate approval and documentation is prohibited                        //
//                                                                             //
//    Class:         CECS490B Senior Projects                                  //
//    Project name:  Garbage Collector                                         //
//    File name:     I2C_Core.v                                                //
//                                                                             //
//    Created by Chanartip Soonthornwan on October 3, 2018.                    //
//    Copyright @ 2018 Chanartip Soonthornwan. All rights reserved.            //
//                                                                             //
//    Abstract:      I2C at bit-level operation controlling data path and      //
//                   controls via a state machine which is scheduling          //
//                   inputs and outputs.                                       //
//                                                                             //
//    In submitting this file for class work at CSULB                          //
//    I am confirming that this is my work and the work                        //
//    of no one else.                                                          //
//                                                                             //
//    In the event other code sources are utilized I will                      //
//    document which portion of code and who is the author                     //
//                                                                             //
//    In submitting this code I acknowledge that plagiarism                    //
//    in student project work is subject to dismissal from the class           //
//                                                                             //
//*****************************************************************************//
// Version 2.1 (November 10, 2018)
//      - Added al_count for to check if there is an arbitrary lost from
//          the master waiting from a slave's signal. If there is no response
//          from a slave, then the master will return to idle state.
//
// Version 2.0 (October 21, 2018)
//      - Remodeled Clock Divider to generate 400khz clock
//      - Remodeled State Machine with more states
//
//  Version 1.1 (October 12, 2018)
//      - Added sw_addr_i and sw_data_i for interacting to a user input
//          to select slave address and data to send
//      - Added tb_port_i to allow input into INPORT of TramelBlaze
//
//  Version 1.0 (October 3, 2018)
//
module I2C_Core(
    input wire clk,                 // On-board Clock 100MHz
    input wire rst,                 // Reset signal
    input wire [6:0] i2c_addr_i,    // Incoming Address
    input wire [7:0] i2c_data_i,    // Incoming Data
    input wire i2c_start_i,         // Start signal
    output reg i2c_ready_o,         // Ready Status Register
     
    output wire SCL,                // I2C SCL (clock) output
    inout  wire SDA                 // I2C SDA (data) input/output
);
    
//_____________________________ IO Padder __________________________________
//        
//        The middle ground for SDA and SCL bus to stop by since bidirectional
//        bus cannot be directly assigning the value. Therefore, there should be a
//        pad or middle ground taking place to make open-drain-like circuit.
//        The bus will be high impedance when no one takes control of the bus.
//        In order to control the bus, an output enable seize the control of 
//        the bus. Once output is done, the output enable will be released, and
//        the bus from this device perspective will be high-impedance.
//        High-impedance is like open-drain which will allow incoming input when
//        there is an input from other devices.
//
    reg     scl_pad_o;              // i2c_clock output
    reg     scl_pad_oen;            // i2c_clock output enable
    
    wire    sda_pad_i;              // i2c_data input
    reg     sda_pad_o;              // i2c_data output
    reg     sda_pad_oen;            // i2c_data output enable

    assign SCL = (scl_pad_oen) ? scl_pad_o : 1'bz;
    assign SDA = (sda_pad_oen) ? sda_pad_o : 1'bz;
    assign sda_pad_i = (~sda_pad_oen)? SDA : 1'bz;

//____________________________ Clk Divider _________________________________
//  
//  Generates slow clock (400khz) by ticking every 2.5 us, and each tick
//  will toggle the slow clock level from low to high and vice versa.
//  Calculation: DELAY = 100Mhz / 400Khz = 250
//               DELAY/2 = 125
    parameter  DELAY = 125;    // Constant for toggleling a clock at 1.25 us
    reg [ 7:0] count;          // Time counter
    reg        slow_clk;       // slow_clock from on_board clk
    wire       tick;           // Toggling the clock indicator

    assign tick = (count == (DELAY -1)); // Tick at 5us
    
    always@(posedge clk, posedge rst) begin
        if(rst)  begin
                count   <= 0;
                slow_clk <= 0;
        end else
            if(tick) begin                  // got a tick signal
                count   <= 0;               // reset the counter
                slow_clk <= ~slow_clk;      // switch the slow clock edge    
        end else begin
                count   <= count + 8'b1;    // increment the counter
                slow_clk <= slow_clk;       // slow clock edge stay the same.
        end
    end
    
//____________________________ State Machine _________________________________ 
//  
//  Generates controls and outputs according to an events of each state.
//  There are 20 states in total, but the main states are
//      IDLE -> START -> WRITE_ADDR -> READ_ACK
//                    -> WRITE_DATA -> READ_ACK2 -> STOP -> IDLE
//  Explain:
//  IDLE  - Both SCL and SDA are HIGH, and ready is HIGH indicating that the 
//          I2C is ready for i2c_start_i signal. When i2c_start_i is HIGH, 
//          ready is low as the I2C is busy.
//          slow_clk:  /~~\__/~~\__
//          SCL:       ~~~~~~~~~~~~
//          SDA:       ~~~~~~~~~~~~
//
//  START - First clock will pull SDA LOW while SCL HIGH. Second clock, both 
//          SCL and SDA are LOW, and set the data register by concentrating 
//          Address and Write bit before shifting on the next clock.
//          slow_clk:  /~~\__/~~\__/~~\__/
//          SCL:       ~~~~~~~~~~~~\______ 
//          SDA:       ~~~~~~\____________ 
//
//  WRITE - Shifting the data register from MSB to LSB. Each 4 clocks will
//          decrement the register index by one, and check if it is the LSB.
//          by utilizing command(CMD). If so, move to the read acknowledge.
//          slow_clk:  /~~\__/~~\__/~~\__/~~\__/
//          SCL:       ______/~~~~~~~~~~~\_____/ 
//          SDA:     ==X=======================X==
//
//  READ  - Wait for acknowledge input from a slave device. The input should be
//          ready before the rising edge of SCL and should not change while
//          the SCL is HIGH.
//          slow_clk:  /~~\__/~~\__/~~\__/~~\__/
//          SCL:       ______/~~~~~~~~~~~\_____/ 
//          SDA:     ==X=====\___________/======X==
//
//  STOP  - First clock will pull both SCL and SDA LOW, then SCL HIGH while
//          SDA LOW.
//          slow_clk:  /~~\__/~~\__/~~\__/
//          SCL:       ~~~~~~\_____/~~~~~~ 
//          SDA:       ~~~~~~\___________/ 
//
    localparam 
        S_IDLE      =  0, 
        S_START_0   =  1, S_START_1   =  2,
        S_WR_ADDR_0 =  3, S_WR_ADDR_1 =  4, S_WR_ADDR_2 =  5, S_WR_ADDR_3 =  6, 
        S_RD_ACK1_0 =  7, S_RD_ACK1_1 =  8, S_RD_ACK1_2 =  9, S_RD_ACK1_3 = 10,
        S_WR_DATA_0 = 11, S_WR_DATA_1 = 12, S_WR_DATA_2 = 13, S_WR_DATA_3 = 14,
        S_RD_ACK2_0 = 15, S_RD_ACK2_1 = 16, S_RD_ACK2_2 = 17, S_RD_ACK2_3 = 18,
        S_STOP_0    = 19, S_STOP_1    = 20,
   
        CMD_IDLE    =  1, CMD_START   =  2, CMD_WR_ADDR =  3, CMD_RD_ACK  =  4,
        CMD_WR_DATA =  5, CMD_STOP    =  6, CMD_AR_LOST =  7,

        WRITE_BIT   = 1'b0,
        HIGH        = 1'b1,
        LOW         = 1'b0;
    
    // Registers
    reg [7:0] data_reg;     // Holding immediate data(address or data)
    reg [2:0] bit_count;    // Index for data_reg
    reg [2:0] al_count;     // Arbitrary lost count 
    reg [2:0] cmd;          // Special command on some states
    reg [4:0] state;        // Present State
    reg [4:0] next_state;   // Next State

    // Update Present State on fast clock
    always@(posedge clk, posedge rst) begin
        if(rst) state <= S_IDLE;
        else    state <= next_state;
    end
    
    // State Machine
    always@(posedge slow_clk, posedge rst) begin
        if(rst) begin
            cmd         <= CMD_IDLE;
            scl_pad_oen <= HIGH;
            sda_pad_oen <= HIGH;
            scl_pad_o   <= HIGH;
            sda_pad_o   <= HIGH;
            data_reg    <= 0;
            bit_count   <= 0;
            al_count    <= 0;
            next_state  <= S_IDLE;
            i2c_ready_o <= HIGH;
        end
        else begin
            case(state)
                // IDLE STATE
                //  SCL and SDA are high until receive a start signal
                S_IDLE: begin                       
                    if(i2c_start_i) begin           // receive start signal
                        cmd         <= CMD_START;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= HIGH;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count;
                        al_count    <= al_count;  
                        next_state  <= S_START_0;
                        i2c_ready_o <= LOW;         // now i2c is busy
                    end
                    else begin                      // still idling
                        cmd         <= CMD_IDLE;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= HIGH;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count;
                        al_count    <= al_count; 
                        next_state  <= S_IDLE;
                        i2c_ready_o <= HIGH;
                    end
                end
                
                // START STATE
                //  SDA is LOW while SCL is HIGH,
                //  then SCL is LOW on the next clock
                S_START_0: begin                    
                        cmd         <= CMD_START;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;        
                        sda_pad_o   <= LOW;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count;
                        al_count    <= al_count; 
                        next_state  <= S_START_1;
                end
                S_START_1: begin
                        cmd         <= CMD_WR_ADDR;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= LOW;
                        data_reg    <= {i2c_addr_i, WRITE_BIT}; // Loading data
                        bit_count   <= 3'd7;                    // MSB Index
                        al_count    <= 0;
                        next_state  <= S_WR_ADDR_0;
                end
                
                // WRITE STATE
                //  Shifting MSB to LSB, 
                //  data in data_reg remains the same from clock 0 to 4,
                //  decrement bit_count and move to the new state at
                //  clock 4.
                S_WR_ADDR_0: begin       
                        cmd         <= cmd;                 
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= data_reg[bit_count];
                        data_reg    <= data_reg;
                        bit_count   <= bit_count;
                        al_count    <= al_count; 
                        next_state  <= S_WR_ADDR_1;  
                end
                S_WR_ADDR_1: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count;
                        al_count    <= al_count; 
                        next_state  <= S_WR_ADDR_2;
                end
                S_WR_ADDR_2: begin
                        cmd         <= (bit_count == 0)? CMD_RD_ACK : cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count;
                        al_count    <= al_count; 
                        next_state  <= S_WR_ADDR_3; 
                end
                S_WR_ADDR_3: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count -1;
                        al_count    <= al_count; 
                        next_state  <= (cmd == CMD_RD_ACK)? S_RD_ACK1_0: S_WR_ADDR_0;
                end
                
                // READ STATE
                //  Waiting for an acknowledge from a slave device.
                //  Expected the ack signal to be ready before rising edge
                //  of SCL clock. If the signal is valid, set data_reg with
                //  i2c_data_i, and move to the next state.
                //  Otherwise, come back to wait again.
                S_RD_ACK1_0: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= (al_count == 3)? S_IDLE : S_RD_ACK1_1;
                end
                S_RD_ACK1_1: begin
                        cmd         <= (sda_pad_i ==  LOW)? CMD_WR_DATA: cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= S_RD_ACK1_2;
                end
                S_RD_ACK1_2: begin
                        cmd         <= (sda_pad_i == LOW)? cmd: CMD_RD_ACK;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= S_RD_ACK1_3;
                end
                S_RD_ACK1_3: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= sda_pad_o;
                        
                        if(cmd == CMD_WR_DATA) begin
                            data_reg   <= i2c_data_i;
                            bit_count  <= 3'd7;
                            al_count   <= 0;
                            next_state <= S_WR_DATA_0;
                        end
                        else begin
                            data_reg   <= data_reg;
                            bit_count  <= bit_count;
                            al_count   <= al_count +1;
                            next_state <= S_RD_ACK1_0;                        
                        end                                
                end
                
                // WRITE STATE
                //  Similar to above state, but outputting data instead of
                //  the concentration of {slave address, write bit}
                S_WR_DATA_0: begin       
                        cmd         <= cmd;                 
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= data_reg[bit_count];
                        data_reg    <= data_reg;
                        bit_count   <= bit_count;
                        al_count    <= al_count; 
                        next_state  <= S_WR_DATA_1;  
                end
                S_WR_DATA_1: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= S_WR_DATA_2;
                end
                S_WR_DATA_2: begin
                        cmd         <= (bit_count == 0)? CMD_RD_ACK : cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= S_WR_DATA_3; 
                end
                S_WR_DATA_3: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count -1; 
                        al_count    <= al_count;
                        next_state  <= (cmd == CMD_RD_ACK)? S_RD_ACK2_0: S_WR_DATA_0;
                end
                
                // READ STATE
                //  Similar to above state, but destination is STOP State
                S_RD_ACK2_0: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= (al_count == 3)? S_IDLE : S_RD_ACK2_1;
                end
                S_RD_ACK2_1: begin
                        cmd         <= (sda_pad_i == LOW)? CMD_STOP: CMD_RD_ACK;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= S_RD_ACK2_2;
                end
                S_RD_ACK2_2: begin
                        cmd         <= (sda_pad_i == LOW)? cmd: CMD_RD_ACK;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count;
                        next_state  <= S_RD_ACK2_3;
                end
                S_RD_ACK2_3: begin
                        cmd         <= cmd;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= LOW;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= sda_pad_o;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        al_count    <= al_count +1;
                        next_state  <= (cmd == CMD_STOP)? S_STOP_0 : S_RD_ACK2_0;
                        
                end
                
                // STOP STATE
                //  Both SCL and SDA are LOW, then SCL HIGH and SDA LOW
                //  before moving to IDLE STATE
                S_STOP_0: begin
                        cmd         <= CMD_STOP;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= LOW;
                        sda_pad_o   <= LOW;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        next_state  <= S_STOP_1;
                end
                S_STOP_1: begin
                        cmd         <= CMD_IDLE;
                        scl_pad_oen <= HIGH;
                        sda_pad_oen <= HIGH;
                        scl_pad_o   <= HIGH;
                        sda_pad_o   <= LOW;
                        data_reg    <= data_reg;
                        bit_count   <= bit_count; 
                        next_state  <= S_IDLE;
                end
                
            endcase
        end
    end
    
endmodule

