`timescale 1ns / 1ps
//*****************************************************************************//
//    This document contains information proprietary to the                    //
//    CSULB student that created the file - any reuse without                  //
//    adequate approval and documentation is prohibited                        //
//                                                                             //
//    Class:         CECS490B Senior Projects                                  //
//    Project name:  Garbage Collector                                         //
//    File name:     TSI.v                                                     //
//                                                                             //
//    Created by Chanartip Soonthornwan on November 12, 2018.                  //
//    Copyright @ 2018 Chanartip Soonthornwan. All rights reserved.            //
//                                                                             //
//    Abstract:      Technology Specific Interface (TSI) is a module           //
//                   includes buffers for inputs from other devices            //
//                   to the SOPC, and the buffers for outputs from             //
//                   the SOPC to outside devices.                              //
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
module TSI(
    input wire        clk,       // on-board 100MHz Oscilloscope
    input wire        rst,       // on-board button up reset signal
    input wire        bt_fire_i, // button down I2C firing command
    input wire  [6:0] sw_addr_i, // switches[15:9] I2C address 
    input wire  [7:0] sw_data_i, // switches[7:0] I2C data
    
    output wire       clk_o,
    output wire       rst_o,
    output wire       bt_fire_o,
    output wire [6:0] sw_addr_o,
    output wire [7:0] sw_data_o,
    
    output wire       SCL,       // I2C SCL bus
    output wire [7:0] anode,     // Seven-segment display's anodes
    output wire [6:0] sseg,      // seven segments output
    
    input wire        SCL_i,
    input wire  [7:0] anode_i,
    input wire  [6:0] sseg_i
);
    
    // Global Clock Buffer
    BUFG BUFG_inst (
        .O(clk_o),
        .I(clk)
    );

    // Input
    IBUF #(.IOSTANDARD("DEFAULT")) 
        rst_inst(
         .O(rst_o),
         .I(rst)
        ),
        bt_fire_inst(
         .O(bt_fire_o),
         .I(bt_fire_i)
        ),
        sw_addr_inst[6:0](
         .O(sw_addr_o[6:0]),
         .I(sw_addr_i[6:0])
        ),
        sw_data_inst[7:0](
         .O(sw_data_o[7:0]),
         .I(sw_data_i[7:0])
        );
     
    OBUF #(.IOSTANDARD("DEFAULT"))
        SCL_inst(
         .O(SCL),
         .I(SCL_i)
        ),
        anode_inst[7:0](
         .O(anode[7:0]),
         .I(anode_i[7:0])
        ),
        sseg_inst[6:0](
         .O(sseg[6:0]),
         .I(sseg_i[6:0])
        );

endmodule
