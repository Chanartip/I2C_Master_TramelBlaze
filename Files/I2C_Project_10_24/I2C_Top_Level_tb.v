`timescale 1ns / 1ps
module I2C_Top_Level_tb;

	// Inputs
	reg clk;
	reg rst;
    reg       bt_fire_i;  // button down input
    reg [6:0] sw_addr_i;  // switches[15:9] for 7-bit address input
    reg [7:0] sw_data_i;  // switches[7:0] for 8-bit data input
    
	// Outputs
	wire SCL;

	// Bidirs
	wire SDA;

    localparam DB_TIME = 6050000*5; // 30 ms debounce time

	// Instantiate the Unit Under Test (UUT)
	I2C_Top_Level master (
		.clk(clk), 
		.rst(rst), 
		.SCL(SCL), 
		.SDA(SDA),
        .bt_fire_i(bt_fire_i),
        .sw_addr_i(sw_addr_i),
        .sw_data_i(sw_data_i)
	);
    
    // Instantiate a Slave unit with address of 7'h72
    I2CTest #( .slaveaddress(7'h72) )
    slave1(
        .CLCK(clk), 
        .SCL(SCL), 
        .SDA(SDA)
    );
    
    // Instantiate a Slave unit with address of 7'h55
    I2CTest #( .slaveaddress(7'h55) ) 
    slave2(
        .CLCK(clk), 
        .SCL(SCL), 
        .SDA(SDA)
    );
    
    // Instantiate a Slave unit with address of 7'h01
    I2CTest #( .slaveaddress(7'h01) ) 
    slave3(
        .CLCK(clk), 
        .SCL(SCL), 
        .SDA(SDA)
    );
    
    always #5 clk = ~clk; // Generate on-board clock every 5 ns

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
        bt_fire_i = 0;
        sw_addr_i = 7'h01;
        sw_data_i = 8'hAA;
        
        // Reset the design to a known state
		@(negedge clk) rst = 0;
        #100  bt_fire_i = 1;
        #DB_TIME bt_fire_i = 0;
        
        // Setting switches input and press the fire button, then release
        sw_addr_i = 7'h02; 
        sw_data_i = 8'hA8;
        #DB_TIME bt_fire_i = 1;
        #DB_TIME bt_fire_i = 0;  
        
        // Setting switches input and press the fire button, then release
        sw_addr_i = 7'h72;
        sw_data_i = 8'h01;
        #DB_TIME bt_fire_i = 1;
        #DB_TIME bt_fire_i = 0;    
        
        // Setting switches input and press the fire button, then release
        sw_addr_i = 7'h55;
        sw_data_i = 8'h02;
        #DB_TIME bt_fire_i = 1;
        #DB_TIME bt_fire_i = 0;
        
        // Setting switches input and press the fire button, then release
        sw_addr_i = 7'h12;
        sw_data_i = 8'h03;
        #DB_TIME bt_fire_i = 1;
        #DB_TIME bt_fire_i = 0;
        
        // Setting switches input and press the fire button, then release
        sw_addr_i = 7'h13;
        sw_data_i = 8'h04;
        #DB_TIME bt_fire_i = 1;
        #DB_TIME bt_fire_i = 0;
        // Note: this time, the master will wait for slave's acknowledge forever.
        
        #DB_TIME $finish;
	end
      
endmodule

