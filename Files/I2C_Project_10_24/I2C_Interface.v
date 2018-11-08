`timescale 1ns / 1ps
//*****************************************************************************//
//    This document contains information proprietary to the                    //
//    CSULB student that created the file - any reuse without                  //
//    adequate approval and documentation is prohibited                        //
//                                                                             //
//    Class:         CECS490B Senior Projects                                  //
//    Project name:  Garbage Collector                                         //
//    File name:     I2C_Interface.v                                           //
//                                                                             //
//    Created by Chanartip Soonthornwan on October 10, 2018.                   //
//    Copyright @ 2018 Chanartip Soonthornwan. All rights reserved.            //
//                                                                             //
//    Abstract:      Interconnection of Tramel Blaze and I2C.                  //
//                   This module contains register for holding                 //
//                   I2C address and I2C data to be ready before               //
//                   the I2C Core initiates the transmission.                  //
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
module I2C_Interface (
    input wire        clk,           // System Clock Input
    input wire        rst,           // Synchronous Reset input
    input wire        bt_fire_i,     // Button Down for firing next Transmission
    input wire [6:0]  sw_addr_i,     // Switch[15:9] address input    
    input wire [7:0]  sw_data_i,     // Switch[7:0] data input
    // From/To I2C
    input wire        i2c_ready_i,   // Ready status from I2C Core
    output reg [6:0]  i2c_address_o, // Address output to I2C Core
    output reg [7:0]  i2c_data_o,    // Data output to I2C Core
    output reg        i2c_start_o,   // Start signal to I2C Core
    // From/To Tramel Blaze
    input wire [15:0] tb_port_id_i,  // Port ID from Tramel Blaze
    input wire [15:0] tb_data_i,     // Out-port data from Tramel Blaze
    input wire        tb_write_st_i, // Write Strobe from Tramel Blaze
    input wire        tb_read_st_i,  // Read Strobe from Tramel Blaze
    input wire        tb_intr_ack_i, // Interrupt Acknowledge from Tramel Blaze
    output reg        tb_intr_r_o,   // Interrupt Request to Tramel Blaze
    output reg [15:0] tb_data_o      // ready status to Tramel Blaze
);
    // Parameters for reserved I2C PORTs
    localparam I2C_ADDR_PORT   = 16'h01;
    localparam I2C_DATA_PORT   = 16'h02;
    localparam I2C_CMD_PORT    = 16'h03;
    localparam I2C_STATUS_PORT = 16'h04;
    localparam SW_ADDR_PORT    = 16'h05;
    localparam SW_DATA_PORT    = 16'h06;
        
    // Reset signal for all flops
    wire   reset;
    wire   ready_pulse_w;
    assign reset = rst | ready_pulse_w;
        
    wire bt_fire_db;
    wire bt_fire_pulse_w;

    // Positive Edge Detector
    //  Generate an impulsive signal from 
    //  the edge changing from LOW to HIGH.
    PED 
        ready_pulse_ped(
    .clk   (clk          ), 
    .rst   (rst          ), 
    .d_in  (i2c_ready_i  ), 
    .pulse (ready_pulse_w)
    ),
        button_ready_pulse_ped(
    .clk   (clk          ), 
    .rst   (rst          ), 
    .d_in  (bt_fire_db  ), 
    .pulse (bt_fire_pulse_w)
    );

    // Debounce Module
    //  to stabilize firing input from the button down 
    //  because the button is a mechanical input which might cause
    //  an unstable input in a short period of time,
    //  such that this module will generate a stable signal.
    Debounce db_mod(
    .clk(clk), 
    .rst(rst), 
    .db_in(bt_fire_i), 
    .db_out(bt_fire_db)
    );
    
    // Tramel Blaze Data_input 
    //  Assign a 16-bit TB input either input data or I2C status.
    //  If port_id is I2C_STATUS_PORT and read strobe is HIGH,
    //  TB input is 15'b0 with i2c_ready signal, otherwise 16'b0.
    //  **Note: it will be only I2C status for this project
    always@(*) begin
        if(tb_read_st_i) begin
            case(tb_port_id_i)
                I2C_STATUS_PORT: tb_data_o = {15'b0, i2c_ready_i};
                   SW_ADDR_PORT: tb_data_o = { 9'b0,   sw_addr_i};
                   SW_DATA_PORT: tb_data_o = { 8'b0,   sw_data_i};
                   default     : tb_data_o =  16'b0;
            endcase
        end
        else
            tb_data_o = 16'b0;
    end    

    // RS-Flop for resetting the interrupt request
    //  for the Tramel Blaze when I2C is ready
    always@(posedge clk, posedge rst) begin
        if(rst)                  tb_intr_r_o <= 1'b0;        
        else if(tb_intr_ack_i)   tb_intr_r_o <= 1'b0;
        else if(bt_fire_pulse_w) tb_intr_r_o <= 1'b1;
        else                     tb_intr_r_o <= tb_intr_r_o;
    end
    
    // I2C Address Register
    //  Change output when port id is I2C_ADDR_PORT,
    //  otherwise output stays the same.
    always@(posedge clk, posedge reset) begin
        if(reset)
            i2c_address_o <= 7'b0;
        else if(tb_write_st_i &(tb_port_id_i == I2C_ADDR_PORT))
            i2c_address_o <= tb_data_i[6:0];
        else
            i2c_address_o <= i2c_address_o;
    end
    
    // I2C Data Register
    //  Change output when port id is I2C_DATA_PORT,
    //  otherwise output stays the same.
    always@(posedge clk, posedge reset) begin
        if(reset) 
            i2c_data_o <= 8'b0; 
        else if(tb_write_st_i &(tb_port_id_i == I2C_DATA_PORT))
            i2c_data_o <= tb_data_i[7:0];
        else
            i2c_data_o <= i2c_data_o;
    end
    
    // I2C Start signal Register
    //  Change output when port id is I2C_CMD_PORT,
    //  data in[0] is high, and write_strobe is high,
    //  otherwise output stays the same.
    wire i2c_write_w;
    assign i2c_write_w = tb_data_i[0] & tb_write_st_i 
                                      & (tb_port_id_i == I2C_CMD_PORT);
    always@(posedge clk, posedge reset) begin
        if(reset)             i2c_start_o <= 1'b0;
        else if(!i2c_ready_i) i2c_start_o <= 1'b0;
        else if(i2c_write_w)  i2c_start_o <= tb_data_i[0];
        else                  i2c_start_o <= i2c_start_o; 
    end
    
endmodule
 
//___________________ Positive Edge Detector_____________________________________
//  A module to detect Positive Edge input then returns one-shot pulse 
//  output. If the input is HIGH at the first clock and second clock period, 
//  PED would detect this and output HIGH for one clock period. 
module PED(clk, rst, d_in, pulse);

   input       clk, rst;                // on-board clock, and AISO reset signal
   input           d_in;                // input signal
   output  wire   pulse;                // one-shot pulse 

   reg            q1,q2;                // registers
   
   always@(posedge clk, posedge rst)
      if(rst)  {q1, q2} <= 2'b00;       // reset
      else     {q1, q2} <= {d_in, q1};  // q2 gets q1, and q1 get new signal
               
   // output at the moment of input change
   // q1    ____------------_________
   // q2    ________------------_____
   // pulse ____----_________________
   assign   pulse = q1 & ~q2;           
   
endmodule
//______________________________ End of PED _____________________________________

