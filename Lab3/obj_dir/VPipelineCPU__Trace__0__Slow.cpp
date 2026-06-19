// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPipelineCPU__Syms.h"


VL_ATTR_COLD void VPipelineCPU___024root__trace_init_sub__TOP__0(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+98+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+98+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBit(c+97,"rst_n", false,-1);
    tracep->declBus(c+130,"PC_INPUT", false,-1, 31,0);
    tracep->declBus(c+88,"PC_IF", false,-1, 31,0);
    tracep->declBus(c+89,"PC_plus4_IF", false,-1, 31,0);
    tracep->declBus(c+90,"inst_IF", false,-1, 31,0);
    tracep->declBit(c+37,"regWrite", false,-1);
    tracep->declBus(c+91,"rd1", false,-1, 31,0);
    tracep->declBus(c+92,"rd2", false,-1, 31,0);
    tracep->declBus(c+38,"write_back", false,-1, 31,0);
    tracep->declBit(c+93,"BrEq", false,-1);
    tracep->declBit(c+94,"BrLT", false,-1);
    tracep->declBus(c+66,"shifted_imm", false,-1, 31,0);
    tracep->declBus(c+67,"PC_branch", false,-1, 31,0);
    tracep->declBus(c+39,"ALU_in", false,-1, 31,0);
    tracep->declBus(c+40,"ALUCtl", false,-1, 3,0);
    tracep->declBit(c+84,"zero", false,-1);
    tracep->declBus(c+133,"mem_data", false,-1, 31,0);
    tracep->declBus(c+68,"PC_ID", false,-1, 31,0);
    tracep->declBus(c+131,"PC_plus4_ID", false,-1, 31,0);
    tracep->declBus(c+69,"inst_ID", false,-1, 31,0);
    tracep->declBus(c+70,"opcode_ID", false,-1, 6,0);
    tracep->declBus(c+41,"rd", false,-1, 4,0);
    tracep->declBus(c+71,"funct3_ID", false,-1, 2,0);
    tracep->declBus(c+72,"funct7_ID", false,-1, 6,0);
    tracep->declBus(c+73,"rs1", false,-1, 4,0);
    tracep->declBus(c+74,"rs2", false,-1, 4,0);
    tracep->declBus(c+75,"rs_WB_ID", false,-1, 4,0);
    tracep->declBit(c+76,"memRead_ID", false,-1);
    tracep->declBit(c+77,"memWrite_ID", false,-1);
    tracep->declBit(c+78,"ALUSrc_ID", false,-1);
    tracep->declBit(c+79,"regWrite_ID", false,-1);
    tracep->declBus(c+80,"memtoReg_ID", false,-1, 1,0);
    tracep->declBus(c+95,"PCSel_ID", false,-1, 1,0);
    tracep->declBus(c+81,"ALUOp_ID", false,-1, 1,0);
    tracep->declBus(c+82,"imm_ID", false,-1, 31,0);
    tracep->declBus(c+42,"PC_EX", false,-1, 31,0);
    tracep->declBit(c+43,"memRead_EX", false,-1);
    tracep->declBit(c+44,"memWrite_EX", false,-1);
    tracep->declBit(c+45,"ALUSrc_EX", false,-1);
    tracep->declBit(c+46,"regWrite_EX", false,-1);
    tracep->declBus(c+47,"funct3_EX", false,-1, 2,0);
    tracep->declBus(c+48,"funct7_EX", false,-1, 6,0);
    tracep->declBus(c+49,"memtoReg_EX", false,-1, 1,0);
    tracep->declBus(c+50,"ALUOp_EX", false,-1, 1,0);
    tracep->declBus(c+1,"rd1_EX", false,-1, 31,0);
    tracep->declBus(c+2,"rd2_EX", false,-1, 31,0);
    tracep->declBus(c+3,"imm_EX", false,-1, 31,0);
    tracep->declBus(c+85,"ALU_result_EX", false,-1, 31,0);
    tracep->declBus(c+51,"rs_WB_EX", false,-1, 4,0);
    tracep->declBus(c+52,"PC_mem", false,-1, 31,0);
    tracep->declBit(c+86,"memRead_mem", false,-1);
    tracep->declBit(c+53,"memWrite_mem", false,-1);
    tracep->declBit(c+54,"regWrite_mem", false,-1);
    tracep->declBus(c+55,"memtoReg_mem", false,-1, 1,0);
    tracep->declBus(c+56,"rs_WB_mem", false,-1, 4,0);
    tracep->declBus(c+87,"ALU_result_mem", false,-1, 31,0);
    tracep->declBus(c+4,"rd2_mem", false,-1, 31,0);
    tracep->declBus(c+132,"rd_mem", false,-1, 31,0);
    tracep->declBus(c+57,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+58,"ALU_result_WB", false,-1, 31,0);
    tracep->declBus(c+59,"memRdata_WB", false,-1, 31,0);
    tracep->declBus(c+60,"memtoReg_WB", false,-1, 1,0);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+40,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+1,"A", false,-1, 31,0);
    tracep->declBus(c+39,"B", false,-1, 31,0);
    tracep->declBus(c+85,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+84,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+50,"ALUOp", false,-1, 1,0);
    tracep->declBus(c+48,"funct7", false,-1, 6,0);
    tracep->declBus(c+47,"funct3", false,-1, 2,0);
    tracep->declBus(c+40,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+134,"a", false,-1, 31,0);
    tracep->declBus(c+88,"b", false,-1, 31,0);
    tracep->declBus(c+89,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+68,"a", false,-1, 31,0);
    tracep->declBus(c+82,"b", false,-1, 31,0);
    tracep->declBus(c+67,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+91,"A", false,-1, 31,0);
    tracep->declBus(c+92,"B", false,-1, 31,0);
    tracep->declBit(c+93,"BrEq", false,-1);
    tracep->declBit(c+94,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+53,"memWrite", false,-1);
    tracep->declBit(c+86,"memRead", false,-1);
    tracep->declBus(c+87,"address", false,-1, 31,0);
    tracep->declBus(c+4,"writeData", false,-1, 31,0);
    tracep->declBus(c+132,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBus(c+42,"pc_i", false,-1, 31,0);
    tracep->declBus(c+85,"ALUOut_i", false,-1, 31,0);
    tracep->declBus(c+2,"data_to_mem_i", false,-1, 31,0);
    tracep->declBus(c+51,"rs_WB_i", false,-1, 4,0);
    tracep->declBus(c+61,"WB_M_control_i", false,-1, 4,0);
    tracep->declBus(c+52,"pc_o", false,-1, 31,0);
    tracep->declBus(c+87,"ALUOut_o", false,-1, 31,0);
    tracep->declBus(c+4,"data_to_mem_o", false,-1, 31,0);
    tracep->declBus(c+56,"rs_WB_o", false,-1, 4,0);
    tracep->declBus(c+62,"WB_M_control_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBus(c+68,"PC_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+91,"rd1_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+92,"rd2_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+82,"imm_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+83,"ctrl_IDEX_i", false,-1, 17,0);
    tracep->declBus(c+75,"rd_IDEX_i", false,-1, 4,0);
    tracep->declBus(c+42,"PC_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+1,"rd1_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+2,"rd2_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+3,"imm_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+63,"ctrl_IDEX_o", false,-1, 17,0);
    tracep->declBus(c+51,"rd_IDEX_o", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBus(c+88,"pc_i", false,-1, 31,0);
    tracep->declBus(c+89,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+90,"inst_i", false,-1, 31,0);
    tracep->declBus(c+68,"pc_o", false,-1, 31,0);
    tracep->declBus(c+131,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+69,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+69,"inst", false,-1, 31,0);
    tracep->declBus(c+82,"imm", false,-1, 31,0);
    tracep->declBus(c+70,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+88,"readAddr", false,-1, 31,0);
    tracep->declBus(c+90,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBus(c+52,"PC4_WB_i", false,-1, 31,0);
    tracep->declBus(c+87,"ALUOut_WB_i", false,-1, 31,0);
    tracep->declBus(c+132,"memReadData_WB_i", false,-1, 31,0);
    tracep->declBus(c+56,"rd_WB_i", false,-1, 4,0);
    tracep->declBus(c+64,"ctrl_WB_i", false,-1, 2,0);
    tracep->declBus(c+57,"PC4_WB_o", false,-1, 31,0);
    tracep->declBus(c+58,"ALUOut_WB_o", false,-1, 31,0);
    tracep->declBus(c+59,"memReadData_WB_o", false,-1, 31,0);
    tracep->declBus(c+41,"rd_WB_o", false,-1, 4,0);
    tracep->declBus(c+65,"ctrl_WB_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+135,"size", false,-1, 31,0);
    tracep->declBit(c+45,"sel", false,-1);
    tracep->declBus(c+2,"s0", false,-1, 31,0);
    tracep->declBus(c+3,"s1", false,-1, 31,0);
    tracep->declBus(c+39,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+135,"size", false,-1, 31,0);
    tracep->declBus(c+95,"sel", false,-1, 1,0);
    tracep->declBus(c+89,"s0", false,-1, 31,0);
    tracep->declBus(c+67,"s1", false,-1, 31,0);
    tracep->declBus(c+85,"s2", false,-1, 31,0);
    tracep->declBus(c+130,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+135,"size", false,-1, 31,0);
    tracep->declBus(c+60,"sel", false,-1, 1,0);
    tracep->declBus(c+58,"s0", false,-1, 31,0);
    tracep->declBus(c+59,"s1", false,-1, 31,0);
    tracep->declBus(c+57,"s2", false,-1, 31,0);
    tracep->declBus(c+38,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBus(c+130,"pc_i", false,-1, 31,0);
    tracep->declBus(c+88,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+96,"clk", false,-1);
    tracep->declBit(c+97,"rst", false,-1);
    tracep->declBit(c+37,"regWrite", false,-1);
    tracep->declBus(c+73,"readReg1", false,-1, 4,0);
    tracep->declBus(c+74,"readReg2", false,-1, 4,0);
    tracep->declBus(c+41,"writeReg", false,-1, 4,0);
    tracep->declBus(c+38,"writeData", false,-1, 31,0);
    tracep->declBus(c+91,"readData1", false,-1, 31,0);
    tracep->declBus(c+92,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+5+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+82,"i", false,-1, 31,0);
    tracep->declBus(c+66,"o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_Control ");
    tracep->declBus(c+70,"opcode", false,-1, 6,0);
    tracep->declBus(c+71,"funct3", false,-1, 2,0);
    tracep->declBit(c+93,"BrEq", false,-1);
    tracep->declBit(c+94,"BrLT", false,-1);
    tracep->declBit(c+76,"memRead", false,-1);
    tracep->declBus(c+80,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+81,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+77,"memWrite", false,-1);
    tracep->declBit(c+78,"ALUSrc", false,-1);
    tracep->declBit(c+79,"regWrite", false,-1);
    tracep->declBus(c+95,"PCSel", false,-1, 1,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_init_top(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_init_top\n"); );
    // Body
    VPipelineCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VPipelineCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VPipelineCPU___024root__trace_register(VPipelineCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VPipelineCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VPipelineCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VPipelineCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_top_0\n"); );
    // Init
    VPipelineCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VPipelineCPU___024root*>(voidSelf);
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VPipelineCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VPipelineCPU___024root__trace_full_sub_0(VPipelineCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VPipelineCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPipelineCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__rd1_EX),32);
    bufp->fullIData(oldp+2,(vlSelf->PipelineCPU__DOT__rd2_EX),32);
    bufp->fullIData(oldp+3,(vlSelf->PipelineCPU__DOT__imm_EX),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__rd2_mem),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+6,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+8,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+10,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+11,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+13,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+14,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+15,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+16,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+17,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+20,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+21,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+23,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+24,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+25,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+26,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+27,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+30,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+31,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+32,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+36,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullBit(oldp+37,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__ctrl_WB_o) 
                                  >> 2U))));
    bufp->fullIData(oldp+38,(((0U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__ctrl_WB_o)))
                               ? vlSelf->PipelineCPU__DOT__ALU_result_WB
                               : ((1U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__ctrl_WB_o)))
                                   ? vlSelf->PipelineCPU__DOT__memRdata_WB
                                   : ((2U == (3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__ctrl_WB_o)))
                                       ? vlSelf->PipelineCPU__DOT__PC_WB
                                       : 0U)))),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__ALU_in),32);
    bufp->fullCData(oldp+40,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullCData(oldp+41,(vlSelf->PipelineCPU__DOT__rd),5);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__PC_EX),32);
    bufp->fullBit(oldp+43,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                  >> 0xeU))));
    bufp->fullBit(oldp+44,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                  >> 0xdU))));
    bufp->fullBit(oldp+45,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                  >> 0xcU))));
    bufp->fullBit(oldp+46,((1U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                  >> 0x11U))));
    bufp->fullCData(oldp+47,((7U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                    >> 7U))),3);
    bufp->fullCData(oldp+48,((0x7fU & vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o)),7);
    bufp->fullCData(oldp+49,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                    >> 0xfU))),2);
    bufp->fullCData(oldp+50,((3U & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+51,(vlSelf->PipelineCPU__DOT__rs_WB_EX),5);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__PC_mem),32);
    bufp->fullBit(oldp+53,((1U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o))));
    bufp->fullBit(oldp+54,((1U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                  >> 4U))));
    bufp->fullCData(oldp+55,((3U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                    >> 2U))),2);
    bufp->fullCData(oldp+56,(vlSelf->PipelineCPU__DOT__rs_WB_mem),5);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__PC_WB),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__ALU_result_WB),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__memRdata_WB),32);
    bufp->fullCData(oldp+60,((3U & (IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__ctrl_WB_o))),2);
    bufp->fullCData(oldp+61,((0x1fU & (vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o 
                                       >> 0xdU))),5);
    bufp->fullCData(oldp+62,(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o),5);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT____Vcellout__m_ID_EX_Reg__ctrl_IDEX_o),18);
    bufp->fullCData(oldp+64,((7U & ((IData)(vlSelf->PipelineCPU__DOT____Vcellout__m_EX_MEM_Reg__WB_M_control_o) 
                                    >> 2U))),3);
    bufp->fullCData(oldp+65,(vlSelf->PipelineCPU__DOT____Vcellout__m_MEM_WB_Reg__ctrl_WB_o),3);
    bufp->fullIData(oldp+66,((vlSelf->PipelineCPU__DOT__imm_ID 
                              << 1U)),32);
    bufp->fullIData(oldp+67,((vlSelf->PipelineCPU__DOT__PC_ID 
                              + vlSelf->PipelineCPU__DOT__imm_ID)),32);
    bufp->fullIData(oldp+68,(vlSelf->PipelineCPU__DOT__PC_ID),32);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__inst_ID),32);
    bufp->fullCData(oldp+70,((0x7fU & vlSelf->PipelineCPU__DOT__inst_ID)),7);
    bufp->fullCData(oldp+71,((7U & (vlSelf->PipelineCPU__DOT__inst_ID 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+72,((vlSelf->PipelineCPU__DOT__inst_ID 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+73,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+74,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+75,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                       >> 7U))),5);
    bufp->fullBit(oldp+76,((IData)((3U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_ID)))));
    bufp->fullBit(oldp+77,((1U & ((0x40U & vlSelf->PipelineCPU__DOT__inst_ID)
                                   ? (IData)((0x2fU 
                                              == (0x3fU 
                                                  & vlSelf->PipelineCPU__DOT__inst_ID)))
                                   : (IData)((0x23U 
                                              == (0x3fU 
                                                  & vlSelf->PipelineCPU__DOT__inst_ID)))))));
    bufp->fullBit(oldp+78,(vlSelf->PipelineCPU__DOT__ALUSrc_ID));
    bufp->fullBit(oldp+79,(vlSelf->PipelineCPU__DOT__regWrite_ID));
    bufp->fullCData(oldp+80,(((0x40U & vlSelf->PipelineCPU__DOT__inst_ID)
                               ? ((0x20U & vlSelf->PipelineCPU__DOT__inst_ID)
                                   ? ((0x10U & vlSelf->PipelineCPU__DOT__inst_ID)
                                       ? 0U : ((8U 
                                                & vlSelf->PipelineCPU__DOT__inst_ID)
                                                ? (
                                                   (4U 
                                                    & vlSelf->PipelineCPU__DOT__inst_ID)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->PipelineCPU__DOT__inst_ID)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->PipelineCPU__DOT__inst_ID)
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)
                                                : (
                                                   (4U 
                                                    & vlSelf->PipelineCPU__DOT__inst_ID)
                                                    ? 
                                                   ((2U 
                                                     & vlSelf->PipelineCPU__DOT__inst_ID)
                                                     ? 
                                                    ((1U 
                                                      & vlSelf->PipelineCPU__DOT__inst_ID)
                                                      ? 2U
                                                      : 0U)
                                                     : 0U)
                                                    : 0U)))
                                   : 0U) : ((0x20U 
                                             & vlSelf->PipelineCPU__DOT__inst_ID)
                                             ? 0U : 
                                            ((0x10U 
                                              & vlSelf->PipelineCPU__DOT__inst_ID)
                                              ? 0U : 
                                             ((8U & vlSelf->PipelineCPU__DOT__inst_ID)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->PipelineCPU__DOT__inst_ID)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->PipelineCPU__DOT__inst_ID)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->PipelineCPU__DOT__inst_ID)
                                                     ? 1U
                                                     : 0U)
                                                    : 0U))))))),2);
    bufp->fullCData(oldp+81,(vlSelf->PipelineCPU__DOT__ALUOp_ID),2);
    bufp->fullIData(oldp+82,(vlSelf->PipelineCPU__DOT__imm_ID),32);
    bufp->fullIData(oldp+83,(vlSelf->PipelineCPU__DOT____Vcellinp__m_ID_EX_Reg__ctrl_IDEX_i),18);
    bufp->fullBit(oldp+84,((0U == vlSelf->PipelineCPU__DOT__ALU_result_EX)));
    bufp->fullIData(oldp+85,(vlSelf->PipelineCPU__DOT__ALU_result_EX),32);
    bufp->fullBit(oldp+86,(vlSelf->PipelineCPU__DOT__memRead_mem));
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__ALU_result_mem),32);
    bufp->fullIData(oldp+88,(vlSelf->PipelineCPU__DOT__PC_IF),32);
    bufp->fullIData(oldp+89,(((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_IF)),32);
    bufp->fullIData(oldp+90,(((0x80U <= vlSelf->PipelineCPU__DOT__PC_IF)
                               ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->PipelineCPU__DOT__PC_IF)] 
                                        << 0x18U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
                                            + vlSelf->PipelineCPU__DOT__PC_IF))] 
                                         << 0x10U) 
                                        | ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                            [(0x7fU 
                                              & ((IData)(2U) 
                                                 + vlSelf->PipelineCPU__DOT__PC_IF))] 
                                            << 8U) 
                                           | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & ((IData)(3U) 
                                                + vlSelf->PipelineCPU__DOT__PC_IF))]))))),32);
    bufp->fullIData(oldp+91,(vlSelf->PipelineCPU__DOT__rd1),32);
    bufp->fullIData(oldp+92,(vlSelf->PipelineCPU__DOT__rd2),32);
    bufp->fullBit(oldp+93,(vlSelf->PipelineCPU__DOT__BrEq));
    bufp->fullBit(oldp+94,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullCData(oldp+95,(vlSelf->PipelineCPU__DOT__PCSel_ID),2);
    bufp->fullBit(oldp+96,(vlSelf->clk));
    bufp->fullBit(oldp+97,(vlSelf->start));
    bufp->fullIData(oldp+98,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+130,(((0U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_ID))
                                ? ((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_IF)
                                : ((1U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_ID))
                                    ? (vlSelf->PipelineCPU__DOT__PC_ID 
                                       + vlSelf->PipelineCPU__DOT__imm_ID)
                                    : ((2U == (IData)(vlSelf->PipelineCPU__DOT__PCSel_ID))
                                        ? vlSelf->PipelineCPU__DOT__ALU_result_EX
                                        : 0U)))),32);
    bufp->fullIData(oldp+131,(vlSelf->PipelineCPU__DOT__PC_plus4_ID),32);
    bufp->fullIData(oldp+132,(vlSelf->PipelineCPU__DOT__rd_mem),32);
    bufp->fullIData(oldp+133,(vlSelf->PipelineCPU__DOT__mem_data),32);
    bufp->fullIData(oldp+134,(4U),32);
    bufp->fullIData(oldp+135,(0x20U),32);
}
