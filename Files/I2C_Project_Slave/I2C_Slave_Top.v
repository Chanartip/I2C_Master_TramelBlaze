`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:00:34 11/11/2018 
// Design Name: 
// Module Name:    I2C_Slave_Top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module I2C_Slave_Top(clk, rst, sw, anode, sseg, SDA, SCL);

    input        clk;
    input        rst;
    input  [6:0] sw;
    output [3:0] anode;
    output [6:0] sseg;
    input        SCL;
    inout        SDA;
    
    wire   [7:0] IOout;
    wire         rst_s;
    
    reg    [6:0] slave_addr;
    always@(posedge clk, posedge rst)
        if(rst) slave_addr <= 7'h0;
        else    slave_addr <= sw;
    
    
    I2CslaveWith8bitsIO #(.I2C_ADR(7'h27))
        i2c_slave(
            .SDA(SDA), 
            .SCL(SCL), 
            .IOout(IOout)
        );

    SSG_Driver 
        seven_seg_display(
            .clk(clk), 
            .rst(rst_s), 
            .count({1'b0, sw, IOout}), 
            .anode(anode), 
            .sseg(sseg)
        );

    AISO_rst 
        aiso_rst(
            .clk(clk), 
            .rst(rst), 
            .rst_s(rst_s)
        );
    
endmodule
