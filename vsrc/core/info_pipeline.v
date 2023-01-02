/*
流水线信息都通过此模块分发传递
*/
`include "./vsrc/core/include/defines.v"
module info_pipeline(
     input                                  core_clk
    ,input                                  core_rst

    //如果后面的被pause了。则前面的也要pause，例如pause_exu=1,则ifu和dfu都pause
    //pause是指相应的寄存器不更新，比如pc_pause则暂停pc_reg的更新，而某个u的pause是指暂停
    //其前一个寄存器的输出，比如pause_ifu则暂停pc，pause_exu则暂停de，pause_lsu则暂停
    //el ，pause后的下个周期要清零valid
    ,input                                  pause_ifu
    ,input                                  pause_dfu
    ,input                                  pause_exu
    ,input                                  pause_lsu
    ,input                                  pause_wbu

    //如果前面的被清零了，则后面的也要清零，例如clear_exu=1,则lsu和wbu都clear
    ,input                                  clear_id
    ,input                                  clear_de
    ,input                                  clear_el
    ,input                                  clear_lw
    //,input                                  clear_wbu  
    ,input                                  clear_all
    ,input                                  clear_before_lw

    //
    ,input                                  id_clk_en
    ,input                                  de_clk_en
    ,input                                  el_clk_en
    ,input                                  lw_clk_en   
 


    ,input [31:0]                           ifu_dfu_inst
    ,input [63:0]                           ifu_dfu_pc
    ,input                                  ifu_dfu_valid
    /*
        输出 pc inst valid
    */  
    ,output [`ID_REG_WIDTH - 1 : 0 ]        id_dff



    ,input [4:0]                            dfu_exu_src1
    ,input [4:0]                            dfu_exu_src2
    ,input [4:0]                            dfu_wbu_dst
    ,input [31:0]                           dfu_exu_imm
    ,input [`DECODE_INFO_WIDTH-1:0]         dfu_info
    ,input [5:0]                            dfu_inst_type
    ,input                                  dfu_exu_valid
    /*
        输出 pc inst src1 src2 dst imm info inst_type valid
    */  
    ,output [`DE_REG_WIDTH - 1 : 0 ]        de_dff

    ,input [63:0]                           exu_wbu_dst_data//
    ,input [63:0]                           exu_lsu_addr
    ,input [63:0]                           exu_lsu_data
    //,input [63:0]                           branch_wbu_dst_data//
    ,input [63:0]                           branch_ifu_pc
    ,input                                  branch_ifu_taken
    ,input                                  exu_valid
    //,input [63:0]                           muldiv_wbu_dst_data//
    /*
        输出 pc src1 src2 dst  info inst_type dst_data lsu_addr lsu_data,ifu_pc,ifu_taken valid
    */  
    ,output [`EL_REG_WIDTH - 1 : 0 ]        el_dff

    //,input [63:0]                           lsu_memory_data    
    //,input [63:0]                           lsu_memory_addr    
    //,input                                  lsu_memory_dir     
    //,input                                  lsu_memory_valid   
    //,input [3:0]                            lsu_memory_width   
    ,input [63:0]                           lsu_wbu_data 
    ,input                                  lsu_valid
    /*
        输出 pc src1 src2 dst dst_data  ,ifu_pc,ifu_taken valid
    */  
    ,output [`LW_REG_WIDTH - 1 : 0 ]        lw_dff
);

//id_dff
reg [`ID_REG_WIDTH - 1 : 0 ]        id_dff_reg;
wire                                id_dff_clear;
wire                                id_dff_pause;
assign id_dff_clear = clear_id  | clear_all |clear_before_lw;
assign id_dff_pause = pause_dfu | pause_exu | pause_lsu | pause_wbu;


always @(posedge core_clk or posedge core_rst) begin
    if(core_rst) begin
        id_dff_reg <= {`ID_REG_WIDTH{1'b0}};
        //$display("0");
    end 
    else if(id_dff_clear)begin
        id_dff_reg <= {`ID_REG_WIDTH{1'b0}};
        //$display("1");
    end
    else if(id_dff_pause)begin //保持值不变
    //$display("2");
        ;
    end
    else if(id_clk_en)begin
        //PC
        id_dff_reg[`ID_REG_PC]      <= ifu_dfu_pc   ;
        //INST
        id_dff_reg[`ID_REG_INST]    <= ifu_dfu_inst ;
        //VALID
        //id_dff_reg[`ID_REG_VALID] <= 1'b1;
        id_dff_reg[`ID_REG_VALID]   <= ifu_dfu_valid;
        //$display("3");
    end
    else begin 
        id_dff_reg <= {`ID_REG_WIDTH{1'b0}};
        //$display("4");
    end
end
assign id_dff = id_dff_reg;

//de_dff
reg [`DE_REG_WIDTH - 1 : 0 ]        de_dff_reg;
wire                                de_dff_clear;
wire                                de_dff_pause;
assign de_dff_clear = clear_de  | clear_all | clear_before_lw;
assign de_dff_pause = pause_exu | pause_lsu | pause_wbu;
always @(posedge core_clk or posedge core_rst) begin
    if(core_rst) begin
        de_dff_reg <= {`DE_REG_WIDTH{1'b0}};
    end 
    else if(de_dff_clear)begin
        de_dff_reg <= {`DE_REG_WIDTH{1'b0}};
    end
    else if(de_dff_pause)begin //保持值不变
        //de_dff_reg[`DE_REG_VALID] <= 
        ;
    end
    else if(de_clk_en) begin
        //PC
        de_dff_reg[`DE_REG_PC]          <= id_dff_reg[`ID_REG_PC];
        //INST  
        de_dff_reg[`DE_REG_INST]        <= id_dff_reg[`ID_REG_INST];
        //SRC1  
        de_dff_reg[`DE_REG_SRC1]        <= dfu_exu_src1;
        //SRC2  
        de_dff_reg[`DE_REG_SRC2]        <= dfu_exu_src2;
        //DST   
        de_dff_reg[`DE_REG_DST]         <= dfu_wbu_dst;
        //IMM   
        de_dff_reg[`DE_REG_IMM]         <= dfu_exu_imm;
        //INFO  
        de_dff_reg[`DE_REG_INFO]        <= dfu_info;
        //INST_TYPE
        de_dff_reg[`DE_REG_INST_TYPE]   <= dfu_inst_type;
        //VALID
        //de_dff_reg[`DE_REG_VALID]       <= 1'b1;
        de_dff_reg[`DE_REG_VALID]       <= dfu_exu_valid & (~id_dff_pause);
    end
    else begin 
        de_dff_reg <= {`DE_REG_WIDTH{1'b0}};
    end
end
assign de_dff = de_dff_reg;

//el_dff
reg [`EL_REG_WIDTH - 1 : 0 ]        el_dff_reg;
wire                                el_dff_clear;
wire                                el_dff_pause;
assign el_dff_clear = clear_el  | clear_all | clear_before_lw;
assign el_dff_pause = pause_lsu | pause_wbu;
always @(posedge core_clk or posedge core_rst) begin
    if(core_rst)begin 
        el_dff_reg <= {`EL_REG_WIDTH{1'b0}};
    end
    else if(el_dff_clear)begin 
        el_dff_reg <= {`EL_REG_WIDTH{1'b0}};
    end
    else if(el_dff_pause)begin //保持值不变
        ;
    end
    else if(el_clk_en) begin
        //PC
        el_dff_reg[`EL_REG_PC]                  <= de_dff_reg[`DE_REG_PC];
        //SRC1          
        el_dff_reg[`EL_REG_SRC1]                <= de_dff_reg[`DE_REG_SRC1];
        //SRC2          
        el_dff_reg[`EL_REG_SRC2]                <= de_dff_reg[`DE_REG_SRC2];
        //DST           
        el_dff_reg[`EL_REG_DST]                 <= de_dff_reg[`DE_REG_DST];
        //INFO          
        el_dff_reg[`EL_REG_INFO]                <= de_dff_reg[`DE_REG_INFO];
        //INST_TYPE     
        el_dff_reg[`EL_REG_INST_TYPE]           <= de_dff_reg[`DE_REG_INST_TYPE];
        //DST_DATA      
        el_dff_reg[`EL_REG_DST_DATA]            <= exu_wbu_dst_data;
        //LSU_ADDR      
        el_dff_reg[`EL_REG_LSU_ADDR]            <= exu_lsu_addr;
        //LSU_DATA      
        el_dff_reg[`EL_REG_LSU_DATA]            <= exu_lsu_data;
        //BRANCH_IFU_PC
        el_dff_reg[`EL_REG_IFU_PC]              <= branch_ifu_pc;
        //BRANCH_IFU_TAKEN      
        el_dff_reg[`EL_REG_IFU_TAKEN]           <= branch_ifu_taken;
        //VALID
        el_dff_reg[`EL_REG_VALID]               <= exu_valid & (~de_dff_pause);
    end
    else begin 
        el_dff_reg <= {`EL_REG_WIDTH{1'b0}};
    end
end
assign el_dff = el_dff_reg;

//lw_dff
reg [`LW_REG_WIDTH - 1 : 0 ]        lw_dff_reg;
wire                                lw_dff_clear;
wire                                lw_dff_pause;
assign lw_dff_clear = clear_lw | clear_all;
assign lw_dff_pause = pause_wbu;
always @(posedge core_clk or posedge core_rst) begin
    if(core_rst)begin 
        lw_dff_reg <= {`LW_REG_WIDTH{1'b0}};
    end
    else if(lw_dff_clear)begin 
        lw_dff_reg <= {`LW_REG_WIDTH{1'b0}};
    end
    else if(lw_dff_pause)begin //保持值不变
        ;
    end
    else if(lw_clk_en) begin 
        //PC
        lw_dff_reg[`LW_REG_PC]                  <= el_dff_reg[`LW_REG_PC];
        //INST
        lw_dff_reg[`LW_REG_INST]                <= el_dff_reg[`LW_REG_INST];
        //SRC1
        lw_dff_reg[`LW_REG_SRC1]                <= el_dff_reg[`LW_REG_SRC1];
        //SRC2
        lw_dff_reg[`LW_REG_SRC2]                <= el_dff_reg[`LW_REG_SRC2];
        //DST
        lw_dff_reg[`LW_REG_DST]                 <= el_dff_reg[`LW_REG_DST];
        //INFO
        lw_dff_reg[`LW_REG_INFO]                <= el_dff_reg[`LW_REG_INFO];
        //INST_TYPE
        lw_dff_reg[`LW_REG_INST_TYPE]           <= el_dff_reg[`LW_REG_INST_TYPE];
        //DST_DATA
        lw_dff_reg[`LW_REG_DST_DATA]            <= el_dff_reg[`LW_REG_DST_DATA] | lsu_wbu_data;
        //IFU_PC
        lw_dff_reg[`LW_REG_IFU_PC]              <= el_dff_reg[`LW_REG_IFU_PC];
        //IFU_TAKEN
        lw_dff_reg[`LW_REG_IFU_TAKEN]           <= el_dff_reg[`LW_REG_IFU_TAKEN];
        //VALID
        lw_dff_reg[`LW_REG_VALID]               <= lsu_valid &(~el_dff_pause);


    end
    else begin 
        lw_dff_reg <= {`LW_REG_WIDTH{1'b0}};
    end

end
assign lw_dff = lw_dff_reg;


wire [63:0]ifu_pc_el;
wire       ifu_pc_taken_el;
wire [63:0]ifu_pc_lw;
wire       ifu_pc_taken_lw;
assign ifu_pc_el = el_dff_reg[`EL_REG_IFU_PC];
assign ifu_pc_taken_el = el_dff_reg[`EL_REG_IFU_TAKEN];
assign ifu_pc_lw = lw_dff_reg[`LW_REG_IFU_PC];
assign ifu_pc_taken_lw = lw_dff_reg[`LW_REG_IFU_TAKEN];

wire [`DE_REG_INFO_WIDTH-1:0]de_info;
wire [`EL_REG_INFO_WIDTH-1:0]el_info;
wire [`LW_REG_INFO_WIDTH-1:0]lw_info;
assign de_info = de_dff_reg[`DE_REG_INFO];
assign el_info = el_dff_reg[`EL_REG_INFO];
assign lw_info = lw_dff_reg[`LW_REG_INFO];




endmodule












