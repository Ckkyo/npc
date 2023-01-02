module rawu(
     input                        core_clk
    ,input                        core_rst

    ,input [`ID_REG_WIDTH -1 : 0] id_dff
    ,input [`DE_REG_WIDTH -1 : 0] de_dff
    ,input [`EL_REG_WIDTH -1 : 0] el_dff
    ,input [`LW_REG_WIDTH -1 : 0] lw_dff

    ,output                       rawu_pause_before_and_exu
);
//exu
wire [4:0] exu_src1 ;
wire [4:0] exu_src2 ;
wire [4:0] exu_dst  ;
assign exu_src1 = de_dff[`DE_REG_SRC1];
assign exu_src2 = de_dff[`DE_REG_SRC2];
assign exu_dst  = de_dff[`DE_REG_DST];
wire exu_valid ;
assign exu_valid = de_dff[`DE_REG_VALID];
//lsu
wire [4:0] lsu_src1;
wire [4:0] lsu_src2;
wire [4:0] lsu_dst ;
assign lsu_src1 = el_dff[`EL_REG_SRC1];
assign lsu_src2 = el_dff[`EL_REG_SRC2];
assign lsu_dst  = el_dff[`EL_REG_DST];
wire lsu_valid ;
assign lsu_valid = el_dff[`EL_REG_VALID];
//wbu
wire [4:0] wbu_src1;
wire [4:0] wbu_src2;
wire [4:0] wbu_dst ;
assign wbu_src1 = lw_dff[`LW_REG_SRC1];
assign wbu_src2 = lw_dff[`LW_REG_SRC2];
assign wbu_dst  = lw_dff[`LW_REG_DST];
wire wbu_valid ;
assign wbu_valid = lw_dff[`LW_REG_VALID];

assign rawu_pause_before_and_exu = exu_valid & 
                                  (
                                   (lsu_valid & ((exu_src1 == lsu_dst) | (exu_src2 == lsu_dst))) 
                                  |(wbu_valid & ((exu_src1 == wbu_dst) | (exu_src2 == wbu_dst)))
                                  ) ;










endmodule
