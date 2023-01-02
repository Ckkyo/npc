`include "./vsrc/core/include/defines.v"
module regfile(
    input           core_clk        ,
    input           core_rst        ,
    input           core_clk_en     ,
    input [4:0]     rf_waddr        ,
    input [4:0]     rf_raddr1       ,
    input [4:0]     rf_raddr2       ,
    input [63:0]    rf_wdata        ,
    output [63:0]   rf_rdata1       ,
    output [63:0]   rf_rdata2       
);

reg [63:0] rf1[32];
reg [63:0] rf2[32];





//write

always @(posedge core_clk or posedge core_rst) begin:rf_write
    if(core_rst)begin 
        integer i;
        for(i = 0;i<32;i++)begin 
            rf1[i] <= 0;
            rf2[i] <= 0;
        end
    end
    else if (core_clk_en) begin
        rf1[rf_waddr] <= rf_wdata;
        rf2[rf_waddr] <= rf_wdata;
    end
end


//read
assign rf_rdata1 = (rf_raddr1 == 0) ? 0 : rf1[rf_raddr1] ;
assign rf_rdata2 = (rf_raddr2 == 0) ? 0 : rf2[rf_raddr2] ;


endmodule