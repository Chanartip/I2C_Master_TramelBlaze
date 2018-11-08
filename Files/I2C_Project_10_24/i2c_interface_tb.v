`timescale 1ns / 1ps
module i2c_interface_tb;

	// Inputs
	reg clk;
	reg rst;
	reg bt_fire_i;
	reg [6:0] sw_addr_i;
	reg [7:0] sw_data_i;
	reg i2c_ready_i;
	reg [15:0] tb_port_id_i;
	reg [15:0] tb_data_i;
	reg tb_write_st_i;
	reg tb_read_st_i;
	reg tb_intr_ack_i;

	// Outputs
	wire [6:0] i2c_address_o;
	wire [7:0] i2c_data_o;
	wire i2c_start_o;
	wire tb_intr_r_o;
	wire [15:0] tb_data_o;

    localparam DB_TIME = 6050000*5; // 30 ms debounce time

	// Instantiate the Unit Under Test (UUT)
	I2C_Interface uut (
		.clk(clk), 
		.rst(rst), 
		.bt_fire_i(bt_fire_i), 
		.sw_addr_i(sw_addr_i), 
		.sw_data_i(sw_data_i), 
		.i2c_ready_i(i2c_ready_i), 
		.i2c_address_o(i2c_address_o), 
		.i2c_data_o(i2c_data_o), 
		.i2c_start_o(i2c_start_o), 
		.tb_port_id_i(tb_port_id_i), 
		.tb_data_i(tb_data_i), 
		.tb_write_st_i(tb_write_st_i), 
		.tb_read_st_i(tb_read_st_i), 
		.tb_intr_ack_i(tb_intr_ack_i), 
		.tb_intr_r_o(tb_intr_r_o), 
		.tb_data_o(tb_data_o)
	);
    
    always #5 clk = ~clk; // Toggle on-board clock every 5 ns

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 1;
		bt_fire_i = 0;
		sw_addr_i = 7'h72;
		sw_data_i = 8'hAB;
		i2c_ready_i = 1;
		tb_port_id_i = 0;
		tb_data_i = 0;
		tb_write_st_i = 0;
		tb_read_st_i = 0;
		tb_intr_ack_i = 0;

		// Reset the design to a known state
        @(negedge clk) rst = 0;
                
        // Fire a start signal for I2C_Core,
        //  but it needs DB_TIME (30ms) to stabilize
        //  the push button signal, then bt_db_pulse
        //  will be generated for launching the I2C_Core
        #100 bt_fire_i = 1;
        
            @(negedge clk) tb_read_st_i = 1;        // start read
            @(negedge clk) tb_port_id_i = 16'h0004; // read status
            @(negedge clk) tb_port_id_i = 16'h0005; // read sw_address
            @(negedge clk) tb_port_id_i = 16'h0006; // read sw_data
            @(negedge clk) tb_port_id_i = 16'h0000; // reset port_id
            @(negedge clk) tb_read_st_i = 0;        // stop read
            
            @(negedge clk) tb_write_st_i = 1;       // start write
            @(negedge clk) 
                tb_data_i = 16'h0033;    // write '33' to i2c_addr_o
                tb_port_id_i = 16'h0001; // write address
            @(negedge clk) 
                tb_data_i = 16'h0044;    // write '44' to i2c_data_o
                tb_port_id_i = 16'h0002; // write data
            @(negedge uut.bt_fire_pulse_w) tb_port_id_i = 16'h03; // write start
            @(negedge clk) tb_port_id_i = 16'h0000; // reset port_id
            @(negedge clk) tb_write_st_i = 0;       // stop write
        
            // Simulating that I2C_Core Receive the start signal
            //  and move to Start condition state and set the 
            //  ready signal to low indicating that it is busy.
            @(negedge clk) i2c_ready_i = 0; 
            #100 i2c_ready_i = 1; 
            
        #DB_TIME bt_fire_i = 0;
        
        
        #500 $finish;

	end
      
endmodule

