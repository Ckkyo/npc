`include "./vsrc/core/include/defines.v"
module pc_gen(
     input          core_clk
    ,input          core_rst

    ,input [63:0]   branch_pc 
    ,input          branch_taken 

    ,input [`LW_REG_INFO_WIDTH -1 : 0]lw_info
    ,input [63:0]                     lw_pc
    ,input pc_pause
    //,input pc_clear

    ,output [63:0] pc 
    ,output        pc_valid

    ,output        pc_clear_all

    ,output                           pc_clear_before_lw
    ,input [`EL_REG_INFO_WIDTH -1 : 0]el_info
    ,input [63:0]                     el_pc
    ,input [63:0]                     el_branch_pc 
    ,input                            el_branch_taken 
    ,input                            el_valid
);
//wire is_branch;
//assign is_branch = lw_info[`DECODE_INFO_BRANCH_BIT];
//reg [63:0]  pc_reg          ;
//reg         pc_valid_reg    ;
//assign pc_clear_all = is_branch ;
//always @(posedge core_clk or posedge core_rst) begin
//    $display("pc_reg = %h",pc_reg);
//    if(core_rst)begin 
//        pc_reg <= `RESET_VAL;
//    end
//    else if(pc_valid)begin 
//        if(is_branch)begin 
//            if(branch_taken)begin 
//                pc_reg <= branch_pc;
//            end
//            else begin 
//                pc_reg <= lw_pc + 4;
//            end
//
//        end
//        else if(pc_pause)begin 
//            pc_reg <= pc_reg;
//        end
//        else begin 
//            pc_reg <= pc_reg + 4;
//        end
//    end
//
//end
assign pc_clear_all = 0;
wire is_branch;
assign is_branch = el_valid & el_info[`DECODE_INFO_BRANCH_BIT];
reg [63:0]  pc_reg          ;
reg         pc_valid_reg    ;
assign pc_clear_before_lw = is_branch & el_valid;
always @(posedge core_clk or posedge core_rst) begin
    `ifdef DEBUG_INFO
    $display("pc_reg = %h",pc_reg);
    `endif
    if(core_rst)begin 
        pc_reg <= `RESET_VAL;
    end
    else if(pc_valid)begin 
        if(is_branch)begin 
            if(el_branch_taken)begin 
                pc_reg <= el_branch_pc;
            end
            else begin 
                pc_reg <= el_pc + 4;
            end

        end
        else if(pc_pause)begin 
            pc_reg <= pc_reg;
        end
        else begin 
            pc_reg <= pc_reg + 4;
        end
    end

end
assign pc = pc_reg ;

always @(posedge core_clk or posedge core_rst) begin
    if(core_rst)begin 
        pc_valid_reg <= 0;
    end
    else begin 
        pc_valid_reg <= 1;
    end
end
assign pc_valid = pc_valid_reg ;












endmodule
