`timescale 1ns / 1ps
//*****************************************************************************//
//    This document contains information proprietary to the                    //
//    CSULB student that created the file - any reuse without                  //
//    adequate approval and documentation is prohibited                        //
//                                                                             //
//    Class:         CECS490B Senior Projects                                  //
//    Project name:  Garbage Collector                                         //
//    File name:     TOP_LEVEL.v                                               //
//                                                                             //
//    Created by Chanartip Soonthornwan on November 12, 2018.                  //
//    Copyright @ 2018 Chanartip Soonthornwan. All rights reserved.            //
//                                                                             //
//    Abstract:      Overview of the system on chip shows instantiates         //
//                   TSI and I2C_Top_Level.                                    //
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
module TOP_LEVEL(  
    input  wire       clk,          // ON-BOARD clock
    input  wire       rst,          // BUTTON UP for reset signal
    input  wire       bt_fire_i,    // BUTTON DOWN for fire i2c transmission
    input  wire [6:0] sw_addr_i,    // SWITCHES[15:9]
    input  wire [7:0] sw_data_i,    // SWITCHES[ 7:0]
    
    inout  wire       SDA,          // Bidirectional on JA2
    output wire       SCL,          // Output on JA1
    output wire [7:0] anode,        // Seven Segment Anodes
    output wire [6:0] sseg          // Seven Segment display
);

    wire       clk_w;
    wire       rst_w;
    wire       bt_fire_w;
    wire [6:0] sw_addr_w;
    wire [7:0] sw_data_w;
    wire [7:0] anode_w;
    wire [6:0] sseg_w;
    wire       SCL_w;

    // I2C Instantiate
    I2C_Top_Level i2c_sopc_inst (
    .clk(clk_w),           // clock from TSI
    .rst(rst_w),           // clock from TSI
    .SCL(SCL_w),           // SCL to TSI
    .SDA(SDA),             // SDA to/from JA2
    .bt_fire_i(bt_fire_w), // fire input from TSI
    .sw_addr_i(sw_addr_w), // address input from TSI
    .sw_data_i(sw_data_w), // data input from TSI
    .anode(anode_w),       // anode output to TSI
    .sseg(sseg_w)          // sseg output to TSI
    );
     
    // TSI Instantiate
    TSI tsi_inst (
    .clk(clk),              // GLOBAL CLOCK
    .rst(rst),              // GLOBAL RESET
    .bt_fire_i(bt_fire_i),  // ON-BOARD BUTTON DOWN
    .sw_addr_i(sw_addr_i),  // ON-BOARD SWITCH[15:9]
    .sw_data_i(sw_data_i),  // ON-BOARD SWITCH[ 7:0] 
     
    .clk_o(clk_w),          // Clock from TSI to SOPC
    .rst_o(rst_w),          // Reset from TSI to SOPC
    .bt_fire_o(bt_fire_w),  // Fire from TSI to SOPC
    .sw_addr_o(sw_addr_w),  // Address from TSI to SOPC
    .sw_data_o(sw_data_w),  // Data from TSI to SOPC
    
    .SCL    (SCL),          // SCL from TSI to OUTSIDE
    .anode  (anode),        // anode from TSI to OUTSIDE
    .sseg   (sseg),         // sseg from TSI to OUTSIDE
     
    .SCL_i  (SCL_w),        // SCL from SOPC to TSI
    .anode_i(anode_w),      // anode from SOPC to TSI
    .sseg_i (sseg_w)        // sseg from SOPC to TSI
    );

endmodule 
