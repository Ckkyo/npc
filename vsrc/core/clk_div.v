module clk_div(

    input               core_clk
    ,input              core_rst
    ,output reg  [5:0]  clk_en
); 
always @(posedge core_clk or negedge core_rst)begin 
    if(core_rst)begin 
        clk_en <= 0;
    end 
    else if(clk_en == 0 || clk_en == 6'b10_0000)begin 
        clk_en <= 1;
    end
    else begin
        clk_en <= clk_en << 1;
    end
end










endmodule