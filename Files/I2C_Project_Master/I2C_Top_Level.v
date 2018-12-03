`timescale 1ns / 1ps
//*****************************************************************************//
//    This document contains information proprietary to the                    //
//    CSULB student that created the file - any reuse without                  //
//    adequate approval and documentation is prohibited                        //
//                                                                             //
//    Class:         CECS490B Senior Projects                                  //
//    Project name:  Garbage Collector                                         //
//    File name:     I2C_Top_Level.v                                           //
//                                                                             //
//    Created by Chanartip Soonthornwan on October 3, 2018.                    //
//    Copyright @ 2018 Chanartip Soonthornwan. All rights reserved.            //
//                                                                             //
//    Abstract:      Display structural of Microprocessor (Tramel Blaze)       //
//                   and Communication Protocol Device (I2C Core)              //
//                   utilizing Interface for complex design.                   //
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
//  Version 1.2 (November 11, 2018)
//      - Added anode and sseg for displaying switches current value
//
//  Version 1.1 (October 12, 2018)
//      - Added sw_addr_i and sw_data_i for interacting to a user input
//          to select slave address and data to send
//      - Added tb_port_i to allow input into INPORT of TramelBlaze
//
//  Version 1.0 (October 3, 2018)
//
module I2C_Top_Level(
    input  wire clk,            // System clock (100MHz)
    input  wire rst,            // System reset (from button up)
    output wire SCL,            // I2C Clock wire
    inout  wire SDA,            // I2C Data wire
    
    input wire       bt_fire_i, // button down to fire a transmission
    input wire [6:0] sw_addr_i, // switches[15:9] for 7-bit address input
    input wire [7:0] sw_data_i, // switches[7:0] for 8-bit data input
    
    output wire [7:0] anode,    // Anodes of 7-segment display
    output wire [6:0] sseg      // 7 segments
);    
    wire        sync_rst;       // Synchronized reset signal wire
    
    wire        tb_intr_r_w;    // Interrupt Request from I2C_Interface to TB
    wire        tb_intr_ack_w;  // Interrupt Acknowledge from TB to I2C_Interface
    wire [15:0] tb_out_port_w;  // Output       from TB to I2C_Interface
    wire [15:0] tb_port_id_w;   // PortID       from TB to I2C_Interface
    wire        tb_wr_st_w;     // Write Strobe from TB to I2C_Interface
    wire        tb_rd_st_w;     // Read Strobe  from TB to I2C_Interface
    wire [15:0] tb_data_w;      // Data output  from I2C_Interface to TB
    
    wire [ 6:0] i2c_addr_w;     // Address      from I2C_Interface to I2C_Core
    wire [ 7:0] i2c_data_w;     // Data         from I2C_Interface to I2C_Core
    wire        i2c_start_w;    // Start signal from I2C_Interface to I2C_Core
    wire        i2c_ready_w;    // Ready signal from I2C_Core to I2C_Interface
    
    // Communication Protocol Device
    //  Generating output clock signal on SCL line with frequency of 100KHz
    //  while transmitting 8-bit address and data. Also indicating a ready 
    //  signal to microprocessor before initiating the next transmission.
    I2C_Core i2c_core (
    .clk          (clk            ), 
    .rst          (sync_rst       ), 
    .i2c_addr_i   (i2c_addr_w     ), 
    .i2c_data_i   (i2c_data_w     ), 
    .i2c_start_i  (i2c_start_w    ), 
    .i2c_ready_o  (i2c_ready_w    ),
    .SCL          (SCL            ),
    .SDA          (SDA            )
    );
    
    // Interface
    //  Wrapping all wires, generating ready pulse signal, setting/resetting 
    //  interrupt request, and holding Address and Data in registers
    //  to be ready before initiating an I2C transmission.
    I2C_Interface i2c_interface(
    .clk          (clk          ),
    .rst          (sync_rst     ),
    .bt_fire_i    (bt_fire_i    ),
    .sw_addr_i    (sw_addr_i    ),
    .sw_data_i    (sw_data_i    ),
    // I2C I/O
    .i2c_ready_i  (i2c_ready_w  ),
    .i2c_address_o(i2c_addr_w   ),
    .i2c_data_o   (i2c_data_w   ),
    .i2c_start_o  (i2c_start_w  ),
    // Tramel Blaze I/O
    .tb_port_id_i (tb_port_id_w ),
    .tb_data_i    (tb_out_port_w),
    .tb_write_st_i(tb_wr_st_w   ),
    .tb_read_st_i (tb_rd_st_w   ),
    .tb_intr_ack_i(tb_intr_ack_w),
    .tb_intr_r_o  (tb_intr_r_w  ),
    .tb_data_o    (tb_data_w    )
    );

    // Microprocessor
    //  Created by John Tramel
    //  Utilizing Scratch RAM to load instructions
    //  and execute them before initiates the transmission
    //  *note: In this version, there is only writing to
    //         but not reading from other devices.
    tramelblaze_top tb_top(
    .CLK          (clk          ),        
    .RESET        (sync_rst     ), 
    .IN_PORT      (tb_data_w    ), 
    .INTERRUPT    (tb_intr_r_w  ),
    .OUT_PORT     (tb_out_port_w), 
    .PORT_ID      (tb_port_id_w ), 
    .READ_STROBE  (tb_rd_st_w   ), 
    .WRITE_STROBE (tb_wr_st_w   ), 
    .INTERRUPT_ACK(tb_intr_ack_w)
    );
   
    // Seven Segment Display
    //  Display Address on switches and data
    //  to send out over I2C as for observation
    SSG_Driver ssg_driver(
    .clk(clk), 
    .rst(sync_rst), 
    .count({1'b0, sw_addr_i, sw_data_i}), 
    .anode(anode[3:0]), 
    .sseg(sseg)
    );
    assign anode[7:4] = 4'b1111;
    
    // Asynchronize-In-Synchronize-Out Reset
    //  In used for initiating synchronous reset signal
    //  to the whole design.
    AISO_RST aiso_rst(
    .clk      (clk     ),
    .ref_rst  (rst     ),
    .sync_rst (sync_rst)
    );

endmodule 

//_________________________ ASIO Reset _____________________________________
//  Receives reset signal input from a reset button then generates
//  synchronized output at rising edge to other module in the design.
//  input:  clk - reference clock (on-board clock)
//  input:  ref_rst - reference reset (Asynchronized reset signal input)
//  output: sync_rst - synchronized reset
module AISO_RST(
    input  wire clk, ref_rst,
    output wire sync_rst
);
    reg  r1,r2;

    assign sync_rst = ~r2; // one-clock impulsive reset signal

    always@(posedge clk, posedge ref_rst) begin
        if(ref_rst) {r1, r2} <= 2'b00;
        else        {r1, r2} <= {1'b1, r1};
    end

endmodule
//_______________________ End ASIO Reset ___________________________________

