// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb__Syms.h"


void Vtb___024root__traceChgSub0(Vtb___024root* vlSelf, VerilatedVcd* tracep);

void Vtb___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtb___024root* const __restrict vlSelf = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtb___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtb___024root__traceChgSub0(Vtb___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_data_reg),64);
            tracep->chgQData(oldp+2,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_addr_reg),64);
            tracep->chgBit(oldp+4,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_dir_reg));
            tracep->chgBit(oldp+5,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_valid_reg));
            tracep->chgCData(oldp+6,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_memory_width_reg),4);
            tracep->chgQData(oldp+7,(vlSelf->tb__DOT__u_core_top__DOT__u_ifu__DOT__ifu_dfu_pc_reg),64);
            tracep->chgCData(oldp+9,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src1_reg),5);
            tracep->chgCData(oldp+10,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_src2_reg),5);
            tracep->chgCData(oldp+11,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_wbu_dst_reg),5);
            tracep->chgIData(oldp+12,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_reg),32);
            tracep->chgCData(oldp+13,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_inst_type_reg),6);
            tracep->chgQData(oldp+14,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_info_reg),37);
            tracep->chgQData(oldp+16,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_wbu_data_reg),64);
            tracep->chgBit(oldp+18,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__lsu_pause_before_reg));
            tracep->chgBit(oldp+19,(vlSelf->tb__DOT__u_core_top__DOT__pause_exu));
            tracep->chgBit(oldp+20,(vlSelf->tb__DOT__u_core_top__DOT__pc_pause));
            tracep->chgBit(oldp+21,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_next));
            tracep->chgBit(oldp+22,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_pause));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+23,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                           >> 5U))));
            tracep->chgCData(oldp+24,(vlSelf->tb__DOT__u_core_top__DOT__clk_en),6);
            tracep->chgBit(oldp+25,((1U & (IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en))));
            tracep->chgBit(oldp+26,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                           >> 1U))));
            tracep->chgBit(oldp+27,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                           >> 2U))));
            tracep->chgBit(oldp+28,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                           >> 3U))));
            tracep->chgBit(oldp+29,((1U & ((IData)(vlSelf->tb__DOT__u_core_top__DOT__clk_en) 
                                           >> 4U))));
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgQData(oldp+30,(vlSelf->tb__DOT__u_core_top__DOT__u_pc_gen__DOT__pc_reg),64);
            tracep->chgBit(oldp+32,(vlSelf->tb__DOT__u_core_top__DOT__u_pc_gen__DOT__pc_valid_reg));
            tracep->chgBit(oldp+33,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__st_cur));
            tracep->chgQData(oldp+34,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[0]),64);
            tracep->chgQData(oldp+36,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[1]),64);
            tracep->chgQData(oldp+38,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[2]),64);
            tracep->chgQData(oldp+40,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[3]),64);
            tracep->chgQData(oldp+42,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[4]),64);
            tracep->chgQData(oldp+44,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[5]),64);
            tracep->chgQData(oldp+46,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[6]),64);
            tracep->chgQData(oldp+48,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[7]),64);
            tracep->chgQData(oldp+50,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[8]),64);
            tracep->chgQData(oldp+52,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[9]),64);
            tracep->chgQData(oldp+54,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[10]),64);
            tracep->chgQData(oldp+56,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[11]),64);
            tracep->chgQData(oldp+58,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[12]),64);
            tracep->chgQData(oldp+60,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[13]),64);
            tracep->chgQData(oldp+62,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[14]),64);
            tracep->chgQData(oldp+64,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[15]),64);
            tracep->chgQData(oldp+66,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[16]),64);
            tracep->chgQData(oldp+68,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[17]),64);
            tracep->chgQData(oldp+70,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[18]),64);
            tracep->chgQData(oldp+72,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[19]),64);
            tracep->chgQData(oldp+74,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[20]),64);
            tracep->chgQData(oldp+76,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[21]),64);
            tracep->chgQData(oldp+78,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[22]),64);
            tracep->chgQData(oldp+80,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[23]),64);
            tracep->chgQData(oldp+82,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[24]),64);
            tracep->chgQData(oldp+84,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[25]),64);
            tracep->chgQData(oldp+86,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[26]),64);
            tracep->chgQData(oldp+88,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[27]),64);
            tracep->chgQData(oldp+90,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[28]),64);
            tracep->chgQData(oldp+92,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[29]),64);
            tracep->chgQData(oldp+94,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[30]),64);
            tracep->chgQData(oldp+96,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf1[31]),64);
            tracep->chgQData(oldp+98,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[0]),64);
            tracep->chgQData(oldp+100,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[1]),64);
            tracep->chgQData(oldp+102,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[2]),64);
            tracep->chgQData(oldp+104,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[3]),64);
            tracep->chgQData(oldp+106,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[4]),64);
            tracep->chgQData(oldp+108,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[5]),64);
            tracep->chgQData(oldp+110,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[6]),64);
            tracep->chgQData(oldp+112,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[7]),64);
            tracep->chgQData(oldp+114,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[8]),64);
            tracep->chgQData(oldp+116,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[9]),64);
            tracep->chgQData(oldp+118,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[10]),64);
            tracep->chgQData(oldp+120,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[11]),64);
            tracep->chgQData(oldp+122,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[12]),64);
            tracep->chgQData(oldp+124,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[13]),64);
            tracep->chgQData(oldp+126,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[14]),64);
            tracep->chgQData(oldp+128,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[15]),64);
            tracep->chgQData(oldp+130,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[16]),64);
            tracep->chgQData(oldp+132,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[17]),64);
            tracep->chgQData(oldp+134,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[18]),64);
            tracep->chgQData(oldp+136,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[19]),64);
            tracep->chgQData(oldp+138,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[20]),64);
            tracep->chgQData(oldp+140,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[21]),64);
            tracep->chgQData(oldp+142,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[22]),64);
            tracep->chgQData(oldp+144,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[23]),64);
            tracep->chgQData(oldp+146,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[24]),64);
            tracep->chgQData(oldp+148,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[25]),64);
            tracep->chgQData(oldp+150,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[26]),64);
            tracep->chgQData(oldp+152,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[27]),64);
            tracep->chgQData(oldp+154,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[28]),64);
            tracep->chgQData(oldp+156,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[29]),64);
            tracep->chgQData(oldp+158,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[30]),64);
            tracep->chgQData(oldp+160,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf2[31]),64);
            tracep->chgIData(oldp+162,(vlSelf->tb__DOT__u_core_top__DOT__u_regfile__DOT__rf_write__DOT__unnamedblk1__DOT__i),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgQData(oldp+163,(vlSelf->tb__DOT__memory_lsu_data),64);
            tracep->chgBit(oldp+165,(vlSelf->tb__DOT__memory_lsu_valid));
            tracep->chgQData(oldp+166,(vlSelf->tb__DOT__memory_lsu_data_delay[0]),64);
            tracep->chgQData(oldp+168,(vlSelf->tb__DOT__memory_lsu_data_delay[1]),64);
            tracep->chgBit(oldp+170,(vlSelf->tb__DOT__memory_lsu_valid_delay[0]));
            tracep->chgBit(oldp+171,(vlSelf->tb__DOT__memory_lsu_valid_delay[1]));
            tracep->chgIData(oldp+172,(vlSelf->tb__DOT__delay_lsu__DOT__i),32);
            tracep->chgIData(oldp+173,(vlSelf->tb__DOT__u_i_cache__DOT__rand_valid),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgIData(oldp+174,(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_data_reg),32);
            tracep->chgBit(oldp+175,(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg));
            tracep->chgQData(oldp+176,((0x1fffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[4U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U])) 
                                              >> 0xfU)))),37);
            tracep->chgQData(oldp+178,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[0U])))),64);
            tracep->chgBit(oldp+180,((1U & (~ (IData)(vlSelf->tb__DOT__u_i_cache__DOT__memory_ifu_valid_reg)))));
            tracep->chgBit(oldp+181,((1U & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[3U])));
            tracep->chgCData(oldp+182,((0x1fU & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U])),5);
            tracep->chgCData(oldp+183,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U] 
                                                 >> 5U))),5);
            tracep->chgQData(oldp+184,(vlSelf->tb__DOT__u_core_top__DOT__exu_wbu_dst_data),64);
            tracep->chgQData(oldp+186,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_exu_lsu__DOT__exu_lsu_addr_reg),64);
            tracep->chgQData(oldp+188,(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata2),64);
            tracep->chgQData(oldp+190,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_ifu_pc_reg),64);
            tracep->chgBit(oldp+192,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_ifu_taken_reg));
            tracep->chgBit(oldp+193,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                            >> 0x1aU))));
            tracep->chgBit(oldp+194,(vlSelf->tb__DOT__u_core_top__DOT__lsu_valid));
            tracep->chgCData(oldp+195,(vlSelf->tb__DOT__u_core_top__DOT__wbu_rf_waddr),5);
            tracep->chgQData(oldp+196,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[6U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[5U])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[4U])) 
                                              >> 0x1aU)))),64);
            tracep->chgBit(oldp+198,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[8U] 
                                            >> 0x1bU))));
            tracep->chgQData(oldp+199,(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata1),64);
            tracep->chgWData(oldp+201,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg),97);
            tracep->chgWData(oldp+205,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg),187);
            tracep->chgWData(oldp+211,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg),412);
            tracep->chgWData(oldp+224,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg),284);
            tracep->chgBit(oldp+233,(vlSelf->tb__DOT__u_core_top__DOT__pc_clear_before_lw));
            tracep->chgBit(oldp+234,(vlSelf->tb__DOT__u_core_top__DOT__rawu_pause_before_and_exu));
            tracep->chgQData(oldp+235,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[0U])))),64);
            tracep->chgIData(oldp+237,(vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U]),32);
            tracep->chgCData(oldp+238,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_type),6);
            tracep->chgIData(oldp+239,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_i),32);
            tracep->chgIData(oldp+240,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_s),32);
            tracep->chgIData(oldp+241,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_b),32);
            tracep->chgIData(oldp+242,((0xfffff000U 
                                        & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__id_dff_reg[2U])),32);
            tracep->chgIData(oldp+243,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_exu_imm_j),32);
            tracep->chgSData(oldp+244,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_muldiv_info),13);
            tracep->chgCData(oldp+245,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_csr_info),6);
            tracep->chgCData(oldp+246,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_branch_info),8);
            tracep->chgIData(oldp+247,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_alu_info),32);
            tracep->chgSData(oldp+248,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__dfu_lsu_info),11);
            tracep->chgIData(oldp+249,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct),17);
            tracep->chgIData(oldp+250,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_masked),17);
            tracep->chgIData(oldp+251,(vlSelf->tb__DOT__u_core_top__DOT__u_dfu__DOT__opcode_and_funct_mask),17);
            tracep->chgQData(oldp+252,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[0U])))),64);
            tracep->chgIData(oldp+254,(((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                         << 0x11U) 
                                        | (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U] 
                                           >> 0xfU))),32);
            tracep->chgQData(oldp+255,((0x1fffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U])) 
                                              >> 0xfU)))),37);
            tracep->chgQData(oldp+257,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__imm),64);
            tracep->chgBit(oldp+259,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                            >> 0x12U))));
            tracep->chgIData(oldp+260,(((vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                         << 0x11U) 
                                        | (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                           >> 0xfU))),32);
            tracep->chgQData(oldp+261,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_wbu_dst_data_reg),64);
            tracep->chgBit(oldp+263,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                            >> 0x11U))));
            tracep->chgCData(oldp+264,((0xffU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                                 >> 0xfU))),8);
            tracep->chgQData(oldp+265,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__branch_wbu_dst_data_reg),64);
            tracep->chgBit(oldp+267,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                            >> 0x13U))));
            tracep->chgBit(oldp+268,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[5U] 
                                            >> 0xfU))));
            tracep->chgSData(oldp+269,((0x1fffU & (
                                                   vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[4U] 
                                                   >> 0xfU))),13);
            tracep->chgQData(oldp+270,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_wbu_dst_data_reg),64);
            tracep->chgCData(oldp+272,((0x3fU & (IData)(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__imm))),6);
            tracep->chgIData(oldp+273,((IData)(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata1)),32);
            tracep->chgIData(oldp+274,((IData)(vlSelf->tb__DOT__u_core_top__DOT__rf_exu_rdata2)),32);
            tracep->chgQData(oldp+275,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_64u),64);
            tracep->chgQData(oldp+277,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_64s),64);
            tracep->chgIData(oldp+279,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_32u),32);
            tracep->chgIData(oldp+280,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_alu__DOT__alu_format_32s),32);
            tracep->chgQData(oldp+281,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__op1),64);
            tracep->chgQData(oldp+283,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_branch__DOT__op2),64);
            tracep->chgWData(oldp+285,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128u),128);
            tracep->chgWData(oldp+289,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_128s),128);
            tracep->chgWData(oldp+293,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64u),128);
            tracep->chgWData(oldp+297,(vlSelf->tb__DOT__u_core_top__DOT__u_exu_top__DOT__u_muldiv__DOT__muldiv_format_64s),128);
            tracep->chgQData(oldp+301,((0x1fffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[4U])) 
                                            << 0x11U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])) 
                                              >> 0xfU)))),37);
            tracep->chgQData(oldp+303,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[8U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[7U])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[6U])) 
                                              >> 0x1aU)))),64);
            tracep->chgQData(oldp+305,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xaU])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[9U])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[8U])) 
                                              >> 0x1aU)))),64);
            tracep->chgBit(oldp+307,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xcU] 
                                            >> 0x1bU))));
            tracep->chgBit(oldp+308,(vlSelf->tb__DOT__u_core_top__DOT__u_lsu__DOT__is_load_store));
            tracep->chgSData(oldp+309,((0x7ffU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                                  >> 0xfU))),11);
            tracep->chgBit(oldp+310,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[4U] 
                                            >> 0x13U))));
            tracep->chgCData(oldp+311,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+312,((0x3fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[4U] 
                                                 >> 0x14U))),6);
            tracep->chgIData(oldp+313,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_alu_info),32);
            tracep->chgCData(oldp+314,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_csr_info),6);
            tracep->chgSData(oldp+315,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_lsu_info),11);
            tracep->chgSData(oldp+316,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_muldiv_info),13);
            tracep->chgCData(oldp+317,(vlSelf->tb__DOT__u_core_top__DOT__u_wbu__DOT__dfu_branch_info),8);
            tracep->chgQData(oldp+318,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xcU])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xbU])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xaU])) 
                                              >> 0x1aU)))),64);
            tracep->chgBit(oldp+320,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0xcU] 
                                            >> 0x1aU))));
            tracep->chgQData(oldp+321,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[8U])) 
                                         << 0x26U) 
                                        | (((QData)((IData)(
                                                            vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[7U])) 
                                            << 6U) 
                                           | ((QData)((IData)(
                                                              vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[6U])) 
                                              >> 0x1aU)))),64);
            tracep->chgBit(oldp+323,((1U & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[8U] 
                                            >> 0x1aU))));
            tracep->chgQData(oldp+324,((((QData)((IData)(
                                                         vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[0U])))),64);
            tracep->chgBit(oldp+326,(vlSelf->tb__DOT__u_core_top__DOT__u_pc_gen__DOT__is_branch));
            tracep->chgCData(oldp+327,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__de_dff_reg[3U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+328,((0x1fU & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U])),5);
            tracep->chgCData(oldp+329,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                                 >> 5U))),5);
            tracep->chgCData(oldp+330,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__el_dff_reg[3U] 
                                                 >> 0xaU))),5);
            tracep->chgCData(oldp+331,((0x1fU & vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U])),5);
            tracep->chgCData(oldp+332,((0x1fU & (vlSelf->tb__DOT__u_core_top__DOT__u_info_pipeline__DOT__lw_dff_reg[3U] 
                                                 >> 5U))),5);
        }
        tracep->chgBit(oldp+333,(vlSelf->core_clk));
        tracep->chgBit(oldp+334,(vlSelf->core_rst));
        tracep->chgBit(oldp+335,(vlSelf->ebreak));
        tracep->chgQData(oldp+336,(vlSelf->regfile[0]),64);
        tracep->chgQData(oldp+338,(vlSelf->regfile[1]),64);
        tracep->chgQData(oldp+340,(vlSelf->regfile[2]),64);
        tracep->chgQData(oldp+342,(vlSelf->regfile[3]),64);
        tracep->chgQData(oldp+344,(vlSelf->regfile[4]),64);
        tracep->chgQData(oldp+346,(vlSelf->regfile[5]),64);
        tracep->chgQData(oldp+348,(vlSelf->regfile[6]),64);
        tracep->chgQData(oldp+350,(vlSelf->regfile[7]),64);
        tracep->chgQData(oldp+352,(vlSelf->regfile[8]),64);
        tracep->chgQData(oldp+354,(vlSelf->regfile[9]),64);
        tracep->chgQData(oldp+356,(vlSelf->regfile[10]),64);
        tracep->chgQData(oldp+358,(vlSelf->regfile[11]),64);
        tracep->chgQData(oldp+360,(vlSelf->regfile[12]),64);
        tracep->chgQData(oldp+362,(vlSelf->regfile[13]),64);
        tracep->chgQData(oldp+364,(vlSelf->regfile[14]),64);
        tracep->chgQData(oldp+366,(vlSelf->regfile[15]),64);
        tracep->chgQData(oldp+368,(vlSelf->regfile[16]),64);
        tracep->chgQData(oldp+370,(vlSelf->regfile[17]),64);
        tracep->chgQData(oldp+372,(vlSelf->regfile[18]),64);
        tracep->chgQData(oldp+374,(vlSelf->regfile[19]),64);
        tracep->chgQData(oldp+376,(vlSelf->regfile[20]),64);
        tracep->chgQData(oldp+378,(vlSelf->regfile[21]),64);
        tracep->chgQData(oldp+380,(vlSelf->regfile[22]),64);
        tracep->chgQData(oldp+382,(vlSelf->regfile[23]),64);
        tracep->chgQData(oldp+384,(vlSelf->regfile[24]),64);
        tracep->chgQData(oldp+386,(vlSelf->regfile[25]),64);
        tracep->chgQData(oldp+388,(vlSelf->regfile[26]),64);
        tracep->chgQData(oldp+390,(vlSelf->regfile[27]),64);
        tracep->chgQData(oldp+392,(vlSelf->regfile[28]),64);
        tracep->chgQData(oldp+394,(vlSelf->regfile[29]),64);
        tracep->chgQData(oldp+396,(vlSelf->regfile[30]),64);
        tracep->chgQData(oldp+398,(vlSelf->regfile[31]),64);
        tracep->chgQData(oldp+400,(vlSelf->el_pc),64);
        tracep->chgQData(oldp+402,(vlSelf->lw_pc_delay),64);
        tracep->chgBit(oldp+404,(vlSelf->lw_valid_delay));
    }
}

void Vtb___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtb___024root* const __restrict vlSelf = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    }
}
