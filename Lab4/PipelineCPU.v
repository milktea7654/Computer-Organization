module PipelineCPU (
    input clk,
    input start,
    output signed [31:0] r [0:31]
);

// When input start is zero, cpu should reset
// When input start is high, cpu start running

// The rst signal is active low, which means the module will reset if the rst signal is zero.
// And you should follow this design.

// TODO: connect wire to realize SingleCycleCPU
// The following provides simple template,
// you can modify it as you wish except I/O pin and register module


wire [31:0] PC_INPUT, PC_IF, PC_plus4_IF, inst_IF;
wire [31:0] inst_WB;
wire regWrite, regWrite_WB; 
wire [31:0] rd1, rd2, write_back;

wire BrEq, BrLT;
wire [31:0] shifted_imm, PC_branch, ALU_in, Mux_ALU;
wire [3:0] ALUCtl;

wire [31:0] mem_data;
wire [31:0] PC_ID, PC_plus4_ID, inst_ID, PC_plus4_WB;
wire [31:0] PC_plus4_MEM;
wire [6:0] opcode_ID = inst_ID[6:0];
wire [4:0] rd = inst_WB[11:7];
wire [2:0] funct3_ID = inst_ID[14:12];
wire [6:0] funct7_ID= inst_ID[31:25];
wire [4:0] rs1 = inst_ID[19:15];
wire [4:0] rs2 = inst_ID[24:20];
wire [4:0] rs_WB_ID  = inst_ID[11:7];
wire memRead_ID, memWrite_ID, ALUSrc_ID, regWrite_ID;
wire [1:0]  memtoReg_ID, PCSel, ALUOp_ID;
wire [31:0] imm_ID;

wire [31:0] PC_EX, PC_R1, adder_2_result, PC_plus4_EX;
wire memRead_EX, memWrite_EX, ALUSrc_EX, regWrite_EX;
wire [2:0] funct3_EX;
wire [6:0] funct7_EX;
wire [1:0] memtoReg_EX, ALUOp_EX;
wire [31:0] rd1_EX, rd2_EX, imm_EX, ALU_result_EX, inst_EX;
wire [4:0] rs1_EX = inst_EX[19:15] , rs2_EX = inst_EX[24:20];
wire [31:0] inst_MEM;
wire [4:0]  rs_WB_mem = inst_MEM[11:7], rs_WB_EX = inst_EX[11:7];
wire [31:0] PC_mem;
wire memRead_mem, memWrite_mem, regWrite_mem;
wire [1:0]  memtoReg_mem;
wire [31:0] ALU_result_mem, rd2_mem, rd_mem, rd_WB;
wire ALU_result_ID;
wire [31:0] PC_WB, ALU_result_WB, memRdata_WB;
wire [1:0]  memtoReg_WB;

wire [31:0] PC_muxed, PC_mux1;
wire RePC, PCorR1;
wire Flush_HD;
wire [31:0] rd1_muxed, rd2_muxed;
wire [1:0] EX_ForwardA, EX_ForwardB;
wire [1:0] ID_ForwardA, ID_ForwardB;
wire [31:0] ForwardA_EX, ForwardB_EX;
wire [31:0] ForwardA_ID, ForwardB_ID;
wire [31:0] ForwardA_EX_out, ForwardB_EX_out, ForwardB_MEM_out;

wire [31:0] RS1E_data, RS2E_data;
wire check = (opcode_ID == 7'b1100011);
wire [31:0] PC_4_WB;
wire [31:0] adder_2_src;
wire Flush_ctrl;

PC m_PC(
    .clk(clk),
    .rst(start), 
    .pc_i(PC_muxed),
    .pc_o(PC_IF)
);

Adder m_Adder_1(
    .a(4),
    .b(PC_IF),
    .sum(PC_plus4_IF)
);

InstructionMemory m_InstMem(
    .readAddr(PC_IF),
    .inst(inst_IF)
);

Control m_Control(
    .opcode(inst_ID[6:0]),
    .funct3(inst_ID[14:12]),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead_ID),
    .memtoReg(memtoReg_ID),
    .ALUOp(ALUOp_ID),
    .memWrite(memWrite_ID),
    .ALUSrc(ALUSrc_ID),
    .regWrite(regWrite_ID),
    .PCSel(PCSel),
    .PCorR1(PCorR1),
    .Flush_ctrl(Flush_ctrl)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(start), 
    .regWrite(regWrite_WB),
    .readReg1(inst_ID[19:15]),
    .readReg2(inst_ID[24:20]),
    .writeReg(inst_WB[11:7]),
    .writeData(write_back),
    .readData1(rd1),
    .readData2(rd2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(ForwardA_ID),
    .B(ForwardB_ID),
    .BrEq(BrEq),
    .BrLT(BrLT)
);

ImmGen m_ImmGen(
    .inst(inst_ID),
    .imm(imm_ID)
);

ShiftLeftOne m_ShiftLeftOne(
    .i(imm_ID),
    .o(shifted_imm)
);

Adder m_Adder_2(
    .a(PC_R1),
    .b(shifted_imm),
    .sum(adder_2_result)
);

Mux2to1 #(.size(32)) m_Mux_PCorR1(
    .sel(PCorR1),
    .s0(PC_ID),
    .s1(ForwardA_ID),
    .out(PC_R1)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp_EX),
    .funct7(inst_EX[30]),
    .funct3(inst_EX[14:12]),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(ForwardA_EX_out),
    .B(Mux_ALU),
    .ALUOut(ALU_result_EX)
);

DataMemory m_DataMemory(
    .rst(start),
    .clk(clk),
    .memWrite(memWrite_mem),
    .memRead(memRead_mem),
    .address(ALU_result_mem),
    .writeData(ForwardB_MEM_out),
    .readData(rd_mem)
);



IF_ID_Reg m_IF_ID_Reg (
    .clk   (clk),
    .rst   (start),
    .pc_i  (PC_IF),
    .pc_4_i (PC_plus4_IF),
    .inst_i(inst_IF),
    .Flush_HD(Flush_HD),
    .Flush_ctrl(Flush_ctrl),
    .RePC(RePC),
    .pc_o  (PC_ID),
    .pc_4_o (PC_plus4_ID),
    .inst_o(inst_ID)
);

ID_EX_Reg m_ID_EX_Reg(
    .clk(clk),
    .rst(start),
    .memread_i(memRead_ID),
    .memWrite_i(memWrite_ID),
    .memtoReg_i(memtoReg_ID),
    .regWrite_i(regWrite_ID),
    .AlUop_i(ALUOp_ID),
    .ALUsrc_i(ALUSrc_ID),
    .PC_IDEX_i(PC_plus4_ID),
    .rd1_IDEX_i(ForwardA_ID),
    .rd2_IDEX_i(ForwardB_ID),
    .imm_IDEX_i(imm_ID),
    .inst_id_i(inst_ID),
    .Flush_HD(Flush_HD),
    .memread_o(memRead_EX),
    .memWrite_o(memWrite_EX),
    .memtoReg_o(memtoReg_EX),
    .regWrite_o(regWrite_EX),
    .AlUop_o(ALUOp_EX),
    .ALUsrc_o(ALUSrc_EX),

    .PC_IDEX_o(PC_plus4_EX),
    .rd1_IDEX_o(ForwardA_EX),
    .rd2_IDEX_o(ForwardB_EX),
    .imm_IDEX_o(imm_EX),
    .inst_id_o(inst_EX)
);

EX_MEM_Reg m_EX_MEM_Reg(
    .clk(clk),
    .rst(start),
    .pc_i(PC_plus4_EX),
    .memRead_i(memRead_EX),
    .memWrite_i(memWrite_EX),
    .memtoReg_i(memtoReg_EX),
    .regWrite_i(regWrite_EX),
    .ALUOut_i (ALU_result_EX),
    .rd2_i(ForwardB_EX_out),
    .inst_i(inst_EX),
    .pc_o(PC_plus4_MEM),
    .memRead_o(memRead_mem),
    .memWrite_o(memWrite_mem),
    .memtoReg_o(memtoReg_mem),
    .regWrite_o(regWrite_mem),
    .ALUOut_o(ALU_result_mem),
    .rd2_o(ForwardB_MEM_out),
    .inst_o(inst_MEM)
    );

MEM_WB_Reg m_MEM_WB_Reg(
    .clk(clk),
    .rst(start),
    .memtoReg_i(memtoReg_mem),
    .regWrite_i(regWrite_mem),
    .PC4_WB_i(PC_plus4_MEM),
    .ALUOut_WB_i(ALU_result_mem),
    .memReadData_WB_i(rd_mem),
    .inst_i(inst_MEM),
    .memtoReg_o(memtoReg_WB),
    .regWrite_o(regWrite_WB),
    .PC4_WB_o(PC_plus4_WB),
    .ALUOut_WB_o(ALU_result_WB),
    .memReadData_WB_o(rd_WB),
    .inst_o(inst_WB)
);

Mux2to1 #(.size(32)) m_Mux_PC_1(
    .sel(PCSel[0:0]),
    .s0(PC_plus4_IF),     
    .s1(adder_2_result),     
    .out(PC_mux1)
);

Mux2to1 #(.size(32)) m_Mux_PC_2(
    .sel(RePC),
    .s0(PC_mux1),     
    .s1(PC_IF),     
    .out(PC_muxed)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc_EX),
    .s0(ForwardB_EX_out),     
    .s1(imm_EX),     
    .out(Mux_ALU)
);

HazardDetection m_HazardDetection(
    .mem_Memread(memRead_mem),
    .ex_Rd(inst_EX[11:7]),
    .mem_Rd(inst_MEM[11:7]),
    .id_R1(inst_ID[19:15]),
    .id_R2(inst_ID[24:20]),
    .RePC(RePC),
    .Flush_HD(Flush_HD),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .funct3(inst_ID[14:12]),
    .ex_MemRead(memRead_EX),
    .ex_RegWrite(regWrite_EX),
    .opcode(inst_ID[6:0])

);

Mux3to1 #(.size(32)) m_Mux_EX_ForwardA(
    .sel(EX_ForwardA),
    .s0(ForwardA_EX),
    .s1(write_back),
    .s2(ALU_result_mem),
    .out(ForwardA_EX_out)        
);

Mux3to1 #(.size(32)) m_Mux_EX_ForwardB(
    .sel(EX_ForwardB),
    .s0(ForwardB_EX),
    .s1(write_back),
    .s2(ALU_result_mem),
    .out(ForwardB_EX_out)        
);

Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_WB),
    .s0(ALU_result_WB),
    .s1(rd_WB),
    .s2(PC_plus4_WB),
    .out(write_back)        
);

Forwarding_Unit m_ForwardingUnit(
    .id_R1(inst_ID[19:15]),
    .id_R2(inst_ID[24:20]),
    .ex_R1(inst_EX[19:15]),
    .ex_R2(inst_EX[24:20]),
    .mem_Rd(inst_MEM[11:7]),
    .wb_Rd(inst_WB[11:7]),
    .mem_RegWrite(regWrite_mem),
    .wb_RegWrite(regWrite_WB),
    .ex_RegWrite(regWrite_EX),
    .ex_Rd(inst_EX[11:7]),
    .id_ForwardA(ID_ForwardA),
    .id_ForwardB(ID_ForwardB),
    .ex_ForwardA(EX_ForwardA),
    .ex_ForwardB(EX_ForwardB)
);


Mux4to1 #(.size(32)) m_Mux_ID_ForwardA(
    .sel(ID_ForwardA),
    .s0(rd1),
    .s1(ALU_result_mem),
    .s2(write_back),
    .s3(ALU_result_EX),
    .out(ForwardA_ID)
);

Mux4to1 #(.size(32)) m_Mux_ID_ForwardB(
    .sel(ID_ForwardB),
    .s0(rd2),
    .s1(ALU_result_mem),
    .s2(write_back),
    .s3(ALU_result_EX),
    .out(ForwardB_ID)
);

endmodule
