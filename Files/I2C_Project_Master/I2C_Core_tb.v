`timescale 1ns / 1ps
module I2C_Core_tb;

	// Inputs
	reg clk;
	reg rst;
	reg [6:0] i2c_addr_i;
	reg [7:0] i2c_data_i;
	reg i2c_start_i;

	// Outputs
	wire i2c_ready_o;
	wire SCL;

	// Bidirs
	wire SDA;
    
localparam 
    S_RD_ACK1_0 =  7, S_RD_ACK1_1 =  8, S_RD_ACK1_2 =  9, S_RD_ACK1_3 = 10,
    S_RD_ACK2_0 = 15, S_RD_ACK2_1 = 16, S_RD_ACK2_2 = 17, S_RD_ACK2_3 = 18;

	// Instantiate the Unit Under Test (UUT)
	I2C_Core uut (
		.clk(clk), 
		.rst(rst), 
		.i2c_addr_i(i2c_addr_i), 
		.i2c_data_i(i2c_data_i), 
		.i2c_start_i(i2c_start_i), 
		.i2c_ready_o(i2c_ready_o), 
		.SCL(SCL), 
		.SDA(SDA)
	);

    always #5 clk = ~clk;   // Toggle on-board clock every 5 ns
    
    // Simulate acknowledge bit from a slave at Read Acknowledge State
    assign uut.sda_pad_i = (uut.next_state == S_RD_ACK1_0)? 1 : 
                           (uut.next_state == S_RD_ACK1_1)? 0 : 
                           (uut.next_state == S_RD_ACK1_2)? 0 : 
                           (uut.next_state == S_RD_ACK1_3)? 1 : 
                           (uut.next_state == S_RD_ACK2_0)? 1 : 
                           (uut.next_state == S_RD_ACK2_1)? 0 : 
                           (uut.next_state == S_RD_ACK2_2)? 0 : 
                           (uut.next_state == S_RD_ACK2_3)? 1 : 1;
    
	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		i2c_addr_i = 0;
		i2c_data_i = 0;
		i2c_start_i = 0;
        
        // Reset signal brings the design to a known state
		@(negedge clk) rst = 0; 
        
        // Setup inputs from I2C_Interface and then wait for some time
        @(negedge clk) i2c_addr_i = 7'h72;
        @(negedge clk) i2c_data_i = 8'h45;
        #10000
        @(negedge clk) i2c_start_i = 1'b1;
        #10000 
        @(negedge clk) i2c_start_i = 1'b0;
        #1000000  
        
        // Setup inputs from I2C_Interface and then wait for some time
        @(negedge clk) i2c_addr_i = 7'h41;
        @(negedge clk) i2c_data_i = 8'h92;
        #10000
        @(negedge clk) i2c_start_i = 1'b1;
        #10000 
        @(negedge clk) i2c_start_i = 1'b0;
        
        #1000000 $stop;   
        
	end
      
endmodule

