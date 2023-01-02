`include "./vsrc/core/include/defines.v"
/*
根据指令产生相应的读写信号并且等待memory回复valid
在未返回valid之前，应当产生pause信号，将pc，ifu，df，exu停止
如果不是读写指令，则直接返回valid
*/

module lsu(

     input core_clk
    ,input core_rst
    //,input core_clk_en del

    ,input [`DECODE_INFO_WIDTH-1:0] dfu_info
    //,input                              lsu_en
    //addr from exu
    ,input [63:0] exu_lsu_addr
    ,input [63:0] exu_lsu_data
    ,input        exu_lsu_valid //new  valid要求持续一个时钟周期

    //interact with memory
    ,output[63:0] lsu_memory_data    //lsu数据
    ,output[63:0] lsu_memory_addr    //lsu地址
    ,output       lsu_memory_dir     //lsu方向 0 == 读，1 == 写
    ,output       lsu_memory_valid   //lsu使能
    ,output[3:0]  lsu_memory_width   //byte
    //,input        memory_lsu_ready   //内存空闲
    ,input [63:0] memory_lsu_data    //memory数据
    ,input        memory_lsu_valid //new

    //interact with wbu
    ,output [63:0]lsu_wbu_data 

    ,output       lsu_valid//new
    ,output       lsu_pause_before   //pause before lsu,即pc（停止自增），ifu，df，exu
);

//debug info







///////////////////////////////////////////


parameter ST_NOT_LOAD_STORE = 'b0;
parameter ST_IS_LOAD_STORE = 'b1;
reg st_cur;
reg st_next;
wire st_not_2_is;
wire st_is_2_not;
assign st_not_2_is = is_load_store;//lsu_memory_valid;
assign st_is_2_not = memory_lsu_valid;
//状态转移
always @(posedge core_clk or posedge core_rst) begin
    if(core_rst)begin 
        st_cur <= ST_NOT_LOAD_STORE;
    end 
    else begin 
        st_cur <= st_next;
    end
end
//下一个状态的条件
always @(*) begin
    if(core_rst)begin 
        st_next = ST_NOT_LOAD_STORE ;
    end
    else begin 
        case (st_cur)
            ST_NOT_LOAD_STORE: begin 
                if(st_not_2_is)begin 
                    st_next = ST_IS_LOAD_STORE;
                end
                else begin 
                    st_next = ST_NOT_LOAD_STORE;
                end
            end
            ST_IS_LOAD_STORE:begin 
                if(st_is_2_not)begin 
                    st_next = ST_NOT_LOAD_STORE;
                end
                else begin 
                    st_next = ST_IS_LOAD_STORE;
                end
            end
            default: st_next = ST_NOT_LOAD_STORE;
        endcase
    end

end

//输出

//主要是控制lsu_pause_before lsu_memory_valid_reg
reg lsu_pause_before_reg;
always @(*) begin
    if(core_rst)begin 
        //st_next = ST_NOT_LOAD_STORE ;
    end
    else begin 
        case (st_cur)
            ST_NOT_LOAD_STORE: begin 
                if(st_not_2_is)begin 
                    lsu_pause_before_reg = 'b1 ;
                    lsu_memory_valid_reg = 'b1 ;
                end
                else begin 
                    lsu_pause_before_reg = 'b0 ;
                    lsu_memory_valid_reg = 'b0 ;
                end
            end
            ST_IS_LOAD_STORE:begin 
                if(st_is_2_not)begin 
                    lsu_pause_before_reg = 'b0 ;
                    lsu_memory_valid_reg = 'b0 ;
                end
                else begin 
                    lsu_pause_before_reg = 'b1 ;
                    lsu_memory_valid_reg = 'b0 ;
                end
            end
            default:begin 
                lsu_pause_before_reg = 'b0 ;
                lsu_memory_valid_reg = 'b0 ;
            end
        endcase
    end

end



wire [`DECODE_INFO_LSU_WIDTH-1:0] dfu_lsu_info ;
wire lsu_en;
wire is_load_store ;
assign dfu_lsu_info = dfu_info[`DECODE_INFO_LSU_WIDTH-1:0];
assign lsu_en = dfu_info[`DECODE_INFO_LSU_BIT];
assign lsu_valid = exu_lsu_valid&(memory_lsu_valid | ~is_load_store);
assign lsu_pause_before = lsu_pause_before_reg;//is_load_store & (~memory_lsu_valid);

assign is_load_store = lsu_en & exu_lsu_valid;


//产生读写信号
parameter READ = 1'b0;
parameter WRITE= 1'b1;
reg[63:0] lsu_memory_data_reg  ;
reg[63:0] lsu_memory_addr_reg  ;
reg       lsu_memory_dir_reg   ;
reg[3:0]  lsu_memory_width_reg ;
reg       lsu_memory_valid_reg ;
reg[63:0] lsu_wbu_data_reg     ;

always @(*) begin
    if(core_rst)begin 
        lsu_memory_data_reg  = 0;
        lsu_memory_addr_reg  = 0;
        lsu_memory_dir_reg   = 0;
        //lsu_memory_valid_reg = 0;
        lsu_wbu_data_reg     = 0;
    end
    else if(is_load_store) begin
        lsu_memory_data_reg  = exu_lsu_data             ;
        lsu_memory_addr_reg  = exu_lsu_addr;
        case (1'b1)
            //LB
            dfu_lsu_info[`LB] :begin 
                lsu_memory_dir_reg   = READ;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 1;
                lsu_wbu_data_reg     = {{(64-8){memory_lsu_data[7]}},memory_lsu_data[7:0]};
            end
            //LH
            dfu_lsu_info[`LH] :begin 
                lsu_memory_dir_reg   = READ;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 2;
                lsu_wbu_data_reg     = {{(64-16){memory_lsu_data[15]}},memory_lsu_data[15:0]};
            end
            //LW
            dfu_lsu_info[`LW] :begin 
                lsu_memory_dir_reg   = READ;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 4;
                lsu_wbu_data_reg     = {{(64-32){memory_lsu_data[31]}},memory_lsu_data[31:0]};
            end
            //LD
            dfu_lsu_info[`LD] :begin 
                lsu_memory_dir_reg   = READ;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 8;
                lsu_wbu_data_reg     = memory_lsu_data;
            end
            //SB
            dfu_lsu_info[`SB] :begin 
                lsu_memory_dir_reg   = WRITE;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 1;
                lsu_wbu_data_reg     = 0;
            end
            //SH
            dfu_lsu_info[`SH] :begin 
                lsu_memory_dir_reg   = WRITE;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 2;
                lsu_wbu_data_reg     = 0;
            end
            //SW
            dfu_lsu_info[`SW] :begin 
                lsu_memory_dir_reg   = WRITE;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 4;
                lsu_wbu_data_reg     = 0;
            end
            //SD
            dfu_lsu_info[`SD] :begin 
                lsu_memory_dir_reg   = WRITE;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 8;
                lsu_wbu_data_reg     = 0;
            end
            //LBU
            dfu_lsu_info[`LBU] :begin 
                lsu_memory_dir_reg   = READ;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 1;
                lsu_wbu_data_reg     = {{(64-8){1'b0}},memory_lsu_data[7:0]};
            end
            //LHU
            dfu_lsu_info[`LHU] :begin 
                lsu_memory_dir_reg   = READ;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 2;
                lsu_wbu_data_reg     = {{(64-16){1'b0}},memory_lsu_data[15:0]};
            end
            //LWU
            dfu_lsu_info[`LWU] :begin 
                lsu_memory_dir_reg   = READ;
                //lsu_memory_valid_reg = 1;
                lsu_memory_width_reg = 4;
                lsu_wbu_data_reg     = {{(64-32){1'b0}},memory_lsu_data[31:0]};
            end

            default: begin 
                lsu_memory_dir_reg   = 0;
                //lsu_memory_valid_reg = 0;
                lsu_memory_width_reg = 0;
                lsu_wbu_data_reg     = 0;
            end
        endcase
    end
    else begin 
        lsu_memory_data_reg  = 0;
        lsu_memory_addr_reg  = 0;
        lsu_memory_dir_reg   = 0;
        lsu_memory_width_reg = 0;        //lsu_memory_valid_reg = 0;
        lsu_wbu_data_reg     = 0;
    end
end



assign lsu_memory_data   = lsu_memory_data_reg  ;
assign lsu_memory_addr   = lsu_memory_addr_reg  ;
assign lsu_memory_dir    = lsu_memory_dir_reg   ;
assign lsu_memory_width  = lsu_memory_width_reg ;



//reg lsu_memory_valid_reg_delay;
//always @(posedge core_clk ) begin
//    lsu_memory_valid_reg_delay <= lsu_memory_valid_reg;
//
//end

assign lsu_memory_valid  = lsu_memory_valid_reg ;//lsu_memory_valid_reg & (~lsu_memory_valid_reg_delay);



assign lsu_wbu_data      = lsu_wbu_data_reg     ;





endmodule