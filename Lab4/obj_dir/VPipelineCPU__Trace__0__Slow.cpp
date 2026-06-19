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
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+109+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("PipelineCPU ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+109+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+148,"PC_INPUT", false,-1, 31,0);
    tracep->declBus(c+1,"PC_IF", false,-1, 31,0);
    tracep->declBus(c+2,"PC_plus4_IF", false,-1, 31,0);
    tracep->declBus(c+3,"inst_IF", false,-1, 31,0);
    tracep->declBus(c+5,"inst_WB", false,-1, 31,0);
    tracep->declBit(c+149,"regWrite", false,-1);
    tracep->declBit(c+6,"regWrite_WB", false,-1);
    tracep->declBus(c+141,"rd1", false,-1, 31,0);
    tracep->declBus(c+142,"rd2", false,-1, 31,0);
    tracep->declBus(c+7,"write_back", false,-1, 31,0);
    tracep->declBit(c+88,"BrEq", false,-1);
    tracep->declBit(c+89,"BrLT", false,-1);
    tracep->declBus(c+70,"shifted_imm", false,-1, 31,0);
    tracep->declBus(c+150,"PC_branch", false,-1, 31,0);
    tracep->declBus(c+151,"ALU_in", false,-1, 31,0);
    tracep->declBus(c+81,"Mux_ALU", false,-1, 31,0);
    tracep->declBus(c+8,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+152,"mem_data", false,-1, 31,0);
    tracep->declBus(c+4,"PC_ID", false,-1, 31,0);
    tracep->declBus(c+71,"PC_plus4_ID", false,-1, 31,0);
    tracep->declBus(c+72,"inst_ID", false,-1, 31,0);
    tracep->declBus(c+9,"PC_plus4_WB", false,-1, 31,0);
    tracep->declBus(c+10,"PC_plus4_MEM", false,-1, 31,0);
    tracep->declBus(c+73,"opcode_ID", false,-1, 6,0);
    tracep->declBus(c+11,"rd", false,-1, 4,0);
    tracep->declBus(c+74,"funct3_ID", false,-1, 2,0);
    tracep->declBus(c+75,"funct7_ID", false,-1, 6,0);
    tracep->declBus(c+76,"rs1", false,-1, 4,0);
    tracep->declBus(c+77,"rs2", false,-1, 4,0);
    tracep->declBus(c+78,"rs_WB_ID", false,-1, 4,0);
    tracep->declBit(c+90,"memRead_ID", false,-1);
    tracep->declBit(c+91,"memWrite_ID", false,-1);
    tracep->declBit(c+92,"ALUSrc_ID", false,-1);
    tracep->declBit(c+93,"regWrite_ID", false,-1);
    tracep->declBus(c+94,"memtoReg_ID", false,-1, 1,0);
    tracep->declBus(c+95,"PCSel", false,-1, 1,0);
    tracep->declBus(c+96,"ALUOp_ID", false,-1, 1,0);
    tracep->declBus(c+79,"imm_ID", false,-1, 31,0);
    tracep->declBus(c+153,"PC_EX", false,-1, 31,0);
    tracep->declBus(c+143,"PC_R1", false,-1, 31,0);
    tracep->declBus(c+144,"adder_2_result", false,-1, 31,0);
    tracep->declBus(c+12,"PC_plus4_EX", false,-1, 31,0);
    tracep->declBit(c+82,"memRead_EX", false,-1);
    tracep->declBit(c+13,"memWrite_EX", false,-1);
    tracep->declBit(c+14,"ALUSrc_EX", false,-1);
    tracep->declBit(c+15,"regWrite_EX", false,-1);
    tracep->declBus(c+154,"funct3_EX", false,-1, 2,0);
    tracep->declBus(c+155,"funct7_EX", false,-1, 6,0);
    tracep->declBus(c+16,"memtoReg_EX", false,-1, 1,0);
    tracep->declBus(c+17,"ALUOp_EX", false,-1, 1,0);
    tracep->declBus(c+156,"rd1_EX", false,-1, 31,0);
    tracep->declBus(c+157,"rd2_EX", false,-1, 31,0);
    tracep->declBus(c+18,"imm_EX", false,-1, 31,0);
    tracep->declBus(c+83,"ALU_result_EX", false,-1, 31,0);
    tracep->declBus(c+19,"inst_EX", false,-1, 31,0);
    tracep->declBus(c+20,"rs1_EX", false,-1, 4,0);
    tracep->declBus(c+21,"rs2_EX", false,-1, 4,0);
    tracep->declBus(c+22,"inst_MEM", false,-1, 31,0);
    tracep->declBus(c+23,"rs_WB_mem", false,-1, 4,0);
    tracep->declBus(c+24,"rs_WB_EX", false,-1, 4,0);
    tracep->declBus(c+158,"PC_mem", false,-1, 31,0);
    tracep->declBit(c+84,"memRead_mem", false,-1);
    tracep->declBit(c+25,"memWrite_mem", false,-1);
    tracep->declBit(c+26,"regWrite_mem", false,-1);
    tracep->declBus(c+27,"memtoReg_mem", false,-1, 1,0);
    tracep->declBus(c+85,"ALU_result_mem", false,-1, 31,0);
    tracep->declBus(c+159,"rd2_mem", false,-1, 31,0);
    tracep->declBus(c+145,"rd_mem", false,-1, 31,0);
    tracep->declBus(c+28,"rd_WB", false,-1, 31,0);
    tracep->declBit(c+160,"ALU_result_ID", false,-1);
    tracep->declBus(c+161,"PC_WB", false,-1, 31,0);
    tracep->declBus(c+29,"ALU_result_WB", false,-1, 31,0);
    tracep->declBus(c+162,"memRdata_WB", false,-1, 31,0);
    tracep->declBus(c+30,"memtoReg_WB", false,-1, 1,0);
    tracep->declBus(c+146,"PC_muxed", false,-1, 31,0);
    tracep->declBus(c+147,"PC_mux1", false,-1, 31,0);
    tracep->declBit(c+97,"RePC", false,-1);
    tracep->declBit(c+98,"PCorR1", false,-1);
    tracep->declBit(c+99,"Flush_HD", false,-1);
    tracep->declBus(c+163,"rd1_muxed", false,-1, 31,0);
    tracep->declBus(c+164,"rd2_muxed", false,-1, 31,0);
    tracep->declBus(c+31,"EX_ForwardA", false,-1, 1,0);
    tracep->declBus(c+32,"EX_ForwardB", false,-1, 1,0);
    tracep->declBus(c+100,"ID_ForwardA", false,-1, 1,0);
    tracep->declBus(c+101,"ID_ForwardB", false,-1, 1,0);
    tracep->declBus(c+33,"ForwardA_EX", false,-1, 31,0);
    tracep->declBus(c+34,"ForwardB_EX", false,-1, 31,0);
    tracep->declBus(c+102,"ForwardA_ID", false,-1, 31,0);
    tracep->declBus(c+103,"ForwardB_ID", false,-1, 31,0);
    tracep->declBus(c+86,"ForwardA_EX_out", false,-1, 31,0);
    tracep->declBus(c+87,"ForwardB_EX_out", false,-1, 31,0);
    tracep->declBus(c+35,"ForwardB_MEM_out", false,-1, 31,0);
    tracep->declBus(c+165,"RS1E_data", false,-1, 31,0);
    tracep->declBus(c+166,"RS2E_data", false,-1, 31,0);
    tracep->declBit(c+80,"check", false,-1);
    tracep->declBus(c+167,"PC_4_WB", false,-1, 31,0);
    tracep->declBus(c+168,"adder_2_src", false,-1, 31,0);
    tracep->declBit(c+104,"Flush_ctrl", false,-1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+8,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+86,"A", false,-1, 31,0);
    tracep->declBus(c+81,"B", false,-1, 31,0);
    tracep->declBus(c+83,"ALUOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+17,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+36,"funct7", false,-1);
    tracep->declBus(c+37,"funct3", false,-1, 2,0);
    tracep->declBus(c+8,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+169,"a", false,-1, 31,0);
    tracep->declBus(c+1,"b", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+143,"a", false,-1, 31,0);
    tracep->declBus(c+70,"b", false,-1, 31,0);
    tracep->declBus(c+144,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_BranchComp ");
    tracep->declBus(c+102,"A", false,-1, 31,0);
    tracep->declBus(c+103,"B", false,-1, 31,0);
    tracep->declBit(c+88,"BrEq", false,-1);
    tracep->declBit(c+89,"BrLT", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+73,"opcode", false,-1, 6,0);
    tracep->declBus(c+74,"funct3", false,-1, 2,0);
    tracep->declBit(c+88,"BrEq", false,-1);
    tracep->declBit(c+89,"BrLT", false,-1);
    tracep->declBit(c+90,"memRead", false,-1);
    tracep->declBus(c+94,"memtoReg", false,-1, 1,0);
    tracep->declBus(c+96,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+91,"memWrite", false,-1);
    tracep->declBit(c+92,"ALUSrc", false,-1);
    tracep->declBit(c+93,"regWrite", false,-1);
    tracep->declBus(c+95,"PCSel", false,-1, 1,0);
    tracep->declBit(c+98,"PCorR1", false,-1);
    tracep->declBit(c+104,"Flush_ctrl", false,-1);
    tracep->declBus(c+105,"ctrl", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+25,"memWrite", false,-1);
    tracep->declBit(c+84,"memRead", false,-1);
    tracep->declBus(c+85,"address", false,-1, 31,0);
    tracep->declBus(c+35,"writeData", false,-1, 31,0);
    tracep->declBus(c+145,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EX_MEM_Reg ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBus(c+12,"pc_i", false,-1, 31,0);
    tracep->declBus(c+83,"ALUOut_i", false,-1, 31,0);
    tracep->declBus(c+87,"rd2_i", false,-1, 31,0);
    tracep->declBus(c+19,"inst_i", false,-1, 31,0);
    tracep->declBus(c+16,"memtoReg_i", false,-1, 1,0);
    tracep->declBit(c+82,"memRead_i", false,-1);
    tracep->declBit(c+13,"memWrite_i", false,-1);
    tracep->declBit(c+15,"regWrite_i", false,-1);
    tracep->declBus(c+10,"pc_o", false,-1, 31,0);
    tracep->declBus(c+85,"ALUOut_o", false,-1, 31,0);
    tracep->declBus(c+35,"rd2_o", false,-1, 31,0);
    tracep->declBus(c+22,"inst_o", false,-1, 31,0);
    tracep->declBus(c+27,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+84,"memRead_o", false,-1);
    tracep->declBit(c+25,"memWrite_o", false,-1);
    tracep->declBit(c+26,"regWrite_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ForwardingUnit ");
    tracep->declBus(c+76,"id_R1", false,-1, 4,0);
    tracep->declBus(c+77,"id_R2", false,-1, 4,0);
    tracep->declBus(c+20,"ex_R1", false,-1, 4,0);
    tracep->declBus(c+21,"ex_R2", false,-1, 4,0);
    tracep->declBus(c+23,"mem_Rd", false,-1, 4,0);
    tracep->declBus(c+11,"wb_Rd", false,-1, 4,0);
    tracep->declBit(c+26,"mem_RegWrite", false,-1);
    tracep->declBit(c+6,"wb_RegWrite", false,-1);
    tracep->declBit(c+15,"ex_RegWrite", false,-1);
    tracep->declBus(c+24,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+100,"id_ForwardA", false,-1, 1,0);
    tracep->declBus(c+101,"id_ForwardB", false,-1, 1,0);
    tracep->declBus(c+31,"ex_ForwardA", false,-1, 1,0);
    tracep->declBus(c+32,"ex_ForwardB", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_HazardDetection ");
    tracep->declBus(c+76,"id_R1", false,-1, 4,0);
    tracep->declBus(c+77,"id_R2", false,-1, 4,0);
    tracep->declBus(c+24,"ex_Rd", false,-1, 4,0);
    tracep->declBus(c+23,"mem_Rd", false,-1, 4,0);
    tracep->declBit(c+88,"BrEq", false,-1);
    tracep->declBit(c+89,"BrLT", false,-1);
    tracep->declBit(c+82,"ex_MemRead", false,-1);
    tracep->declBit(c+84,"mem_Memread", false,-1);
    tracep->declBit(c+15,"ex_RegWrite", false,-1);
    tracep->declBus(c+73,"opcode", false,-1, 6,0);
    tracep->declBus(c+74,"funct3", false,-1, 2,0);
    tracep->declBit(c+97,"RePC", false,-1);
    tracep->declBit(c+99,"Flush_HD", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ID_EX_Reg ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBus(c+71,"PC_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+102,"rd1_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+103,"rd2_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+79,"imm_IDEX_i", false,-1, 31,0);
    tracep->declBus(c+72,"inst_id_i", false,-1, 31,0);
    tracep->declBus(c+94,"memtoReg_i", false,-1, 1,0);
    tracep->declBus(c+96,"AlUop_i", false,-1, 1,0);
    tracep->declBit(c+92,"ALUsrc_i", false,-1);
    tracep->declBit(c+99,"Flush_HD", false,-1);
    tracep->declBit(c+90,"memread_i", false,-1);
    tracep->declBit(c+91,"memWrite_i", false,-1);
    tracep->declBit(c+93,"regWrite_i", false,-1);
    tracep->declBus(c+12,"PC_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+33,"rd1_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+34,"rd2_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+18,"imm_IDEX_o", false,-1, 31,0);
    tracep->declBus(c+19,"inst_id_o", false,-1, 31,0);
    tracep->declBus(c+16,"memtoReg_o", false,-1, 1,0);
    tracep->declBus(c+17,"AlUop_o", false,-1, 1,0);
    tracep->declBit(c+14,"ALUsrc_o", false,-1);
    tracep->declBit(c+82,"memread_o", false,-1);
    tracep->declBit(c+13,"memWrite_o", false,-1);
    tracep->declBit(c+15,"regWrite_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IF_ID_Reg ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBit(c+99,"Flush_HD", false,-1);
    tracep->declBit(c+104,"Flush_ctrl", false,-1);
    tracep->declBit(c+97,"RePC", false,-1);
    tracep->declBus(c+1,"pc_i", false,-1, 31,0);
    tracep->declBus(c+2,"pc_4_i", false,-1, 31,0);
    tracep->declBus(c+3,"inst_i", false,-1, 31,0);
    tracep->declBus(c+4,"pc_o", false,-1, 31,0);
    tracep->declBus(c+71,"pc_4_o", false,-1, 31,0);
    tracep->declBus(c+72,"inst_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+72,"inst", false,-1, 31,0);
    tracep->declBus(c+79,"imm", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+1,"readAddr", false,-1, 31,0);
    tracep->declBus(c+3,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEM_WB_Reg ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBus(c+10,"PC4_WB_i", false,-1, 31,0);
    tracep->declBus(c+85,"ALUOut_WB_i", false,-1, 31,0);
    tracep->declBus(c+145,"memReadData_WB_i", false,-1, 31,0);
    tracep->declBus(c+22,"inst_i", false,-1, 31,0);
    tracep->declBus(c+27,"memtoReg_i", false,-1, 1,0);
    tracep->declBit(c+26,"regWrite_i", false,-1);
    tracep->declBus(c+9,"PC4_WB_o", false,-1, 31,0);
    tracep->declBus(c+29,"ALUOut_WB_o", false,-1, 31,0);
    tracep->declBus(c+28,"memReadData_WB_o", false,-1, 31,0);
    tracep->declBus(c+5,"inst_o", false,-1, 31,0);
    tracep->declBus(c+30,"memtoReg_o", false,-1, 1,0);
    tracep->declBit(c+6,"regWrite_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBit(c+14,"sel", false,-1);
    tracep->declBus(c+87,"s0", false,-1, 31,0);
    tracep->declBus(c+18,"s1", false,-1, 31,0);
    tracep->declBus(c+81,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_EX_ForwardA ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBus(c+31,"sel", false,-1, 1,0);
    tracep->declBus(c+33,"s0", false,-1, 31,0);
    tracep->declBus(c+7,"s1", false,-1, 31,0);
    tracep->declBus(c+85,"s2", false,-1, 31,0);
    tracep->declBus(c+86,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_EX_ForwardB ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBus(c+32,"sel", false,-1, 1,0);
    tracep->declBus(c+34,"s0", false,-1, 31,0);
    tracep->declBus(c+7,"s1", false,-1, 31,0);
    tracep->declBus(c+85,"s2", false,-1, 31,0);
    tracep->declBus(c+87,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ID_ForwardA ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBus(c+100,"sel", false,-1, 1,0);
    tracep->declBus(c+141,"s0", false,-1, 31,0);
    tracep->declBus(c+85,"s1", false,-1, 31,0);
    tracep->declBus(c+7,"s2", false,-1, 31,0);
    tracep->declBus(c+83,"s3", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ID_ForwardB ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBus(c+101,"sel", false,-1, 1,0);
    tracep->declBus(c+142,"s0", false,-1, 31,0);
    tracep->declBus(c+85,"s1", false,-1, 31,0);
    tracep->declBus(c+7,"s2", false,-1, 31,0);
    tracep->declBus(c+83,"s3", false,-1, 31,0);
    tracep->declBus(c+103,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_1 ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBit(c+106,"sel", false,-1);
    tracep->declBus(c+2,"s0", false,-1, 31,0);
    tracep->declBus(c+144,"s1", false,-1, 31,0);
    tracep->declBus(c+147,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC_2 ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBit(c+97,"sel", false,-1);
    tracep->declBus(c+147,"s0", false,-1, 31,0);
    tracep->declBus(c+1,"s1", false,-1, 31,0);
    tracep->declBus(c+146,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PCorR1 ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBit(c+98,"sel", false,-1);
    tracep->declBus(c+4,"s0", false,-1, 31,0);
    tracep->declBus(c+102,"s1", false,-1, 31,0);
    tracep->declBus(c+143,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+170,"size", false,-1, 31,0);
    tracep->declBus(c+30,"sel", false,-1, 1,0);
    tracep->declBus(c+29,"s0", false,-1, 31,0);
    tracep->declBus(c+28,"s1", false,-1, 31,0);
    tracep->declBus(c+9,"s2", false,-1, 31,0);
    tracep->declBus(c+7,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBus(c+146,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+107,"clk", false,-1);
    tracep->declBit(c+108,"rst", false,-1);
    tracep->declBit(c+6,"regWrite", false,-1);
    tracep->declBus(c+76,"readReg1", false,-1, 4,0);
    tracep->declBus(c+77,"readReg2", false,-1, 4,0);
    tracep->declBus(c+11,"writeReg", false,-1, 4,0);
    tracep->declBus(c+7,"writeData", false,-1, 31,0);
    tracep->declBus(c+141,"readData1", false,-1, 31,0);
    tracep->declBus(c+142,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+38+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+79,"i", false,-1, 31,0);
    tracep->declBus(c+70,"o", false,-1, 31,0);
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
    bufp->fullIData(oldp+1,(vlSelf->PipelineCPU__DOT__PC_IF),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_IF)),32);
    bufp->fullIData(oldp+3,(((0x80U <= vlSelf->PipelineCPU__DOT__PC_IF)
                              ? 0U : ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                       [(0x7fU & vlSelf->PipelineCPU__DOT__PC_IF)] 
                                       << 0x18U) | 
                                      ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(1U) 
                                                   + vlSelf->PipelineCPU__DOT__PC_IF))] 
                                        << 0x10U) | 
                                       ((vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(2U) 
                                            + vlSelf->PipelineCPU__DOT__PC_IF))] 
                                         << 8U) | vlSelf->PipelineCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & ((IData)(3U) 
                                                   + vlSelf->PipelineCPU__DOT__PC_IF))]))))),32);
    bufp->fullIData(oldp+4,(vlSelf->PipelineCPU__DOT__PC_ID),32);
    bufp->fullIData(oldp+5,(vlSelf->PipelineCPU__DOT__inst_WB),32);
    bufp->fullBit(oldp+6,(vlSelf->PipelineCPU__DOT__regWrite_WB));
    bufp->fullIData(oldp+7,(vlSelf->PipelineCPU__DOT__write_back),32);
    bufp->fullCData(oldp+8,(vlSelf->PipelineCPU__DOT__ALUCtl),4);
    bufp->fullIData(oldp+9,(vlSelf->PipelineCPU__DOT__PC_plus4_WB),32);
    bufp->fullIData(oldp+10,(vlSelf->PipelineCPU__DOT__PC_plus4_MEM),32);
    bufp->fullCData(oldp+11,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_WB 
                                       >> 7U))),5);
    bufp->fullIData(oldp+12,(vlSelf->PipelineCPU__DOT__PC_plus4_EX),32);
    bufp->fullBit(oldp+13,(vlSelf->PipelineCPU__DOT__memWrite_EX));
    bufp->fullBit(oldp+14,(vlSelf->PipelineCPU__DOT__ALUSrc_EX));
    bufp->fullBit(oldp+15,(vlSelf->PipelineCPU__DOT__regWrite_EX));
    bufp->fullCData(oldp+16,(vlSelf->PipelineCPU__DOT__memtoReg_EX),2);
    bufp->fullCData(oldp+17,(vlSelf->PipelineCPU__DOT__ALUOp_EX),2);
    bufp->fullIData(oldp+18,(vlSelf->PipelineCPU__DOT__imm_EX),32);
    bufp->fullIData(oldp+19,(vlSelf->PipelineCPU__DOT__inst_EX),32);
    bufp->fullCData(oldp+20,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_EX 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+21,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_EX 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+22,(vlSelf->PipelineCPU__DOT__inst_MEM),32);
    bufp->fullCData(oldp+23,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_MEM 
                                       >> 7U))),5);
    bufp->fullCData(oldp+24,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_EX 
                                       >> 7U))),5);
    bufp->fullBit(oldp+25,(vlSelf->PipelineCPU__DOT__memWrite_mem));
    bufp->fullBit(oldp+26,(vlSelf->PipelineCPU__DOT__regWrite_mem));
    bufp->fullCData(oldp+27,(vlSelf->PipelineCPU__DOT__memtoReg_mem),2);
    bufp->fullIData(oldp+28,(vlSelf->PipelineCPU__DOT__rd_WB),32);
    bufp->fullIData(oldp+29,(vlSelf->PipelineCPU__DOT__ALU_result_WB),32);
    bufp->fullCData(oldp+30,(vlSelf->PipelineCPU__DOT__memtoReg_WB),2);
    bufp->fullCData(oldp+31,(vlSelf->PipelineCPU__DOT__EX_ForwardA),2);
    bufp->fullCData(oldp+32,(vlSelf->PipelineCPU__DOT__EX_ForwardB),2);
    bufp->fullIData(oldp+33,(vlSelf->PipelineCPU__DOT__ForwardA_EX),32);
    bufp->fullIData(oldp+34,(vlSelf->PipelineCPU__DOT__ForwardB_EX),32);
    bufp->fullIData(oldp+35,(vlSelf->PipelineCPU__DOT__ForwardB_MEM_out),32);
    bufp->fullBit(oldp+36,((1U & (vlSelf->PipelineCPU__DOT__inst_EX 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+37,((7U & (vlSelf->PipelineCPU__DOT__inst_EX 
                                    >> 0xcU))),3);
    bufp->fullIData(oldp+38,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+39,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+40,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+41,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+42,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+43,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+44,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+45,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+46,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+47,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+48,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+49,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+50,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+51,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+52,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+53,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+54,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+55,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+56,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+57,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+58,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+59,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+60,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+61,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+62,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+63,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+64,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+65,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+66,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+67,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+68,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+69,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+70,((vlSelf->PipelineCPU__DOT__imm_ID 
                              << 1U)),32);
    bufp->fullIData(oldp+71,(vlSelf->PipelineCPU__DOT__PC_plus4_ID),32);
    bufp->fullIData(oldp+72,(vlSelf->PipelineCPU__DOT__inst_ID),32);
    bufp->fullCData(oldp+73,((0x7fU & vlSelf->PipelineCPU__DOT__inst_ID)),7);
    bufp->fullCData(oldp+74,((7U & (vlSelf->PipelineCPU__DOT__inst_ID 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+75,((vlSelf->PipelineCPU__DOT__inst_ID 
                              >> 0x19U)),7);
    bufp->fullCData(oldp+76,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+77,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+78,((0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                       >> 7U))),5);
    bufp->fullIData(oldp+79,(vlSelf->PipelineCPU__DOT__imm_ID),32);
    bufp->fullBit(oldp+80,((0x63U == (0x7fU & vlSelf->PipelineCPU__DOT__inst_ID))));
    bufp->fullIData(oldp+81,(vlSelf->PipelineCPU__DOT__Mux_ALU),32);
    bufp->fullBit(oldp+82,(vlSelf->PipelineCPU__DOT__memRead_EX));
    bufp->fullIData(oldp+83,(vlSelf->PipelineCPU__DOT__ALU_result_EX),32);
    bufp->fullBit(oldp+84,(vlSelf->PipelineCPU__DOT__memRead_mem));
    bufp->fullIData(oldp+85,(vlSelf->PipelineCPU__DOT__ALU_result_mem),32);
    bufp->fullIData(oldp+86,(vlSelf->PipelineCPU__DOT__ForwardA_EX_out),32);
    bufp->fullIData(oldp+87,(vlSelf->PipelineCPU__DOT__ForwardB_EX_out),32);
    bufp->fullBit(oldp+88,(vlSelf->PipelineCPU__DOT__BrEq));
    bufp->fullBit(oldp+89,(vlSelf->PipelineCPU__DOT__BrLT));
    bufp->fullBit(oldp+90,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 9U))));
    bufp->fullBit(oldp+91,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 4U))));
    bufp->fullBit(oldp+92,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 3U))));
    bufp->fullBit(oldp+93,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 2U))));
    bufp->fullCData(oldp+94,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 7U))),2);
    bufp->fullCData(oldp+95,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 0xaU))),2);
    bufp->fullCData(oldp+96,((3U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 5U))),2);
    bufp->fullBit(oldp+97,(vlSelf->PipelineCPU__DOT__RePC));
    bufp->fullBit(oldp+98,((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullBit(oldp+99,(vlSelf->PipelineCPU__DOT__Flush_HD));
    bufp->fullCData(oldp+100,(vlSelf->PipelineCPU__DOT__ID_ForwardA),2);
    bufp->fullCData(oldp+101,(vlSelf->PipelineCPU__DOT__ID_ForwardB),2);
    bufp->fullIData(oldp+102,(vlSelf->PipelineCPU__DOT__ForwardA_ID),32);
    bufp->fullIData(oldp+103,(vlSelf->PipelineCPU__DOT__ForwardB_ID),32);
    bufp->fullBit(oldp+104,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                   >> 1U))));
    bufp->fullSData(oldp+105,(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl),12);
    bufp->fullBit(oldp+106,((1U & ((IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+107,(vlSelf->clk));
    bufp->fullBit(oldp+108,(vlSelf->start));
    bufp->fullIData(oldp+109,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+113,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+114,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+115,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+116,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+117,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+118,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+119,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+120,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+121,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+122,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+123,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+124,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+125,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+126,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+127,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+128,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+129,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+130,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+131,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+132,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+133,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+134,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+135,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+136,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+137,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+138,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+139,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+140,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+141,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+142,(vlSelf->PipelineCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->PipelineCPU__DOT__inst_ID 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+143,(((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                : vlSelf->PipelineCPU__DOT__PC_ID)),32);
    bufp->fullIData(oldp+144,((((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                 ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                 : vlSelf->PipelineCPU__DOT__PC_ID) 
                               + (vlSelf->PipelineCPU__DOT__imm_ID 
                                  << 1U))),32);
    bufp->fullIData(oldp+145,(vlSelf->PipelineCPU__DOT__rd_mem),32);
    bufp->fullIData(oldp+146,(((IData)(vlSelf->PipelineCPU__DOT__RePC)
                                ? vlSelf->PipelineCPU__DOT__PC_IF
                                : ((0x400U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                    ? (((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                         ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                         : vlSelf->PipelineCPU__DOT__PC_ID) 
                                       + (vlSelf->PipelineCPU__DOT__imm_ID 
                                          << 1U)) : 
                                   ((IData)(4U) + vlSelf->PipelineCPU__DOT__PC_IF)))),32);
    bufp->fullIData(oldp+147,(((0x400U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                ? (((1U & (IData)(vlSelf->PipelineCPU__DOT__m_Control__DOT__ctrl))
                                     ? vlSelf->PipelineCPU__DOT__ForwardA_ID
                                     : vlSelf->PipelineCPU__DOT__PC_ID) 
                                   + (vlSelf->PipelineCPU__DOT__imm_ID 
                                      << 1U)) : ((IData)(4U) 
                                                 + vlSelf->PipelineCPU__DOT__PC_IF))),32);
    bufp->fullIData(oldp+148,(vlSelf->PipelineCPU__DOT__PC_INPUT),32);
    bufp->fullBit(oldp+149,(vlSelf->PipelineCPU__DOT__regWrite));
    bufp->fullIData(oldp+150,(vlSelf->PipelineCPU__DOT__PC_branch),32);
    bufp->fullIData(oldp+151,(vlSelf->PipelineCPU__DOT__ALU_in),32);
    bufp->fullIData(oldp+152,(vlSelf->PipelineCPU__DOT__mem_data),32);
    bufp->fullIData(oldp+153,(vlSelf->PipelineCPU__DOT__PC_EX),32);
    bufp->fullCData(oldp+154,(vlSelf->PipelineCPU__DOT__funct3_EX),3);
    bufp->fullCData(oldp+155,(vlSelf->PipelineCPU__DOT__funct7_EX),7);
    bufp->fullIData(oldp+156,(vlSelf->PipelineCPU__DOT__rd1_EX),32);
    bufp->fullIData(oldp+157,(vlSelf->PipelineCPU__DOT__rd2_EX),32);
    bufp->fullIData(oldp+158,(vlSelf->PipelineCPU__DOT__PC_mem),32);
    bufp->fullIData(oldp+159,(vlSelf->PipelineCPU__DOT__rd2_mem),32);
    bufp->fullBit(oldp+160,(vlSelf->PipelineCPU__DOT__ALU_result_ID));
    bufp->fullIData(oldp+161,(vlSelf->PipelineCPU__DOT__PC_WB),32);
    bufp->fullIData(oldp+162,(vlSelf->PipelineCPU__DOT__memRdata_WB),32);
    bufp->fullIData(oldp+163,(vlSelf->PipelineCPU__DOT__rd1_muxed),32);
    bufp->fullIData(oldp+164,(vlSelf->PipelineCPU__DOT__rd2_muxed),32);
    bufp->fullIData(oldp+165,(vlSelf->PipelineCPU__DOT__RS1E_data),32);
    bufp->fullIData(oldp+166,(vlSelf->PipelineCPU__DOT__RS2E_data),32);
    bufp->fullIData(oldp+167,(vlSelf->PipelineCPU__DOT__PC_4_WB),32);
    bufp->fullIData(oldp+168,(vlSelf->PipelineCPU__DOT__adder_2_src),32);
    bufp->fullIData(oldp+169,(4U),32);
    bufp->fullIData(oldp+170,(0x20U),32);
}
