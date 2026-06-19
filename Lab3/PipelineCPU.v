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

wire rst_n = start; // start=0 時 reset，start=1 時執行

wire [31:0] PC_INPUT, PC_IF, PC_plus4_IF, inst_IF;
wire regWrite;
wire [31:0] rd1, rd2, write_back;

wire BrEq, BrLT;
wire [31:0] shifted_imm, PC_branch, ALU_in;
wire [3:0] ALUCtl;
wire zero;

wire [31:0] mem_data;
wire [31:0] PC_ID, PC_plus4_ID, inst_ID;

wire [6:0] opcode_ID = inst_ID[6:0];
wire [4:0] rd ;
wire [2:0] funct3_ID = inst_ID[14:12];
wire [6:0] funct7_ID= inst_ID[31:25];
wire [4:0] rs1 = inst_ID[19:15];
wire [4:0] rs2 = inst_ID[24:20];
wire [4:0] rs_WB_ID  = inst_ID[11:7];
wire memRead_ID, memWrite_ID, ALUSrc_ID, regWrite_ID;
wire [1:0]  memtoReg_ID, PCSel_ID, ALUOp_ID;
wire [31:0] imm_ID;

wire [31:0] PC_EX;
wire memRead_EX, memWrite_EX, ALUSrc_EX, regWrite_EX;
wire [2:0] funct3_EX;
wire [6:0] funct7_EX;
wire [1:0] memtoReg_EX, ALUOp_EX;
wire [31:0] rd1_EX, rd2_EX, imm_EX, ALU_result_EX;
wire [4:0] rs_WB_EX;

wire [31:0] PC_mem;
wire memRead_mem, memWrite_mem, regWrite_mem;
wire [1:0]  memtoReg_mem;
wire [4:0]  rs_WB_mem;
wire [31:0] ALU_result_mem, rd2_mem, rd_mem;

wire [31:0] PC_WB, ALU_result_WB, memRdata_WB;
wire [1:0]  memtoReg_WB;

PC m_PC(
    .clk(clk),
    .rst(rst_n), 
    .pc_i(PC_INPUT),
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

Control u_Control(
    .opcode(opcode_ID),
    .funct3(funct3_ID),
    .BrEq(BrEq),
    .BrLT(BrLT),
    .memRead(memRead_ID),
    .memtoReg(memtoReg_ID),
    .ALUOp(ALUOp_ID),
    .memWrite(memWrite_ID),
    .ALUSrc(ALUSrc_ID),
    .regWrite(regWrite_ID),
    .PCSel(PCSel_ID)
);

// For Student:
// Do not change the Register instance name!
// Or you will fail validation.

Register m_Register(
    .clk(clk),
    .rst(rst_n), 
    .regWrite(regWrite),
    .readReg1(rs1),
    .readReg2(rs2),
    .writeReg(rd),
    .writeData(write_back),
    .readData1(rd1),
    .readData2(rd2)
);

// ======= for validation =======
// == Dont change this section ==
assign r = m_Register.regs;
// ======= for vaildation =======

BranchComp m_BranchComp(
    .A(rd1),
    .B(rd2),
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
    .a(PC_ID),
    .b(imm_ID),
    .sum(PC_branch)
);

Mux3to1 #(.size(32)) m_Mux_PC(
    .sel(PCSel_ID),
    .s0(PC_plus4_IF),
    .s1(PC_branch),
    .s2(ALU_result_EX),
    .out(PC_INPUT)
);

Mux2to1 #(.size(32)) m_Mux_ALU(
    .sel(ALUSrc_EX),
    .s0(rd2_EX),
    .s1(imm_EX),
    .out(ALU_in)
);

ALUCtrl m_ALUCtrl(
    .ALUOp(ALUOp_EX),
    .funct7(funct7_EX),
    .funct3(funct3_EX),
    .ALUCtl(ALUCtl)
);

ALU m_ALU(
    .ALUctl(ALUCtl),
    .A(rd1_EX),
    .B(ALU_in),
    .ALUOut(ALU_result_EX),
    .zero(zero)
);

DataMemory m_DataMemory(
    .rst(rst_n),
    .clk(clk),
    .memWrite(memWrite_mem),
    .memRead(memRead_mem),
    .address(ALU_result_mem),
    .writeData(rd2_mem),
    .readData(rd_mem)
);


Mux3to1 #(.size(32)) m_Mux_WriteData(
    .sel(memtoReg_WB),
    .s0(ALU_result_WB),
    .s1(memRdata_WB),
    .s2(PC_WB),
    .out(write_back)
);

IF_ID_Reg m_IF_ID_Reg (
    .clk   (clk),
    .rst   (rst_n),
    .pc_i  (PC_IF),
    .pc_4_i (PC_plus4_IF),
    .inst_i(inst_IF),
    .pc_o  (PC_ID),
    .pc_4_o (PC_plus4_ID),
    .inst_o(inst_ID)
);

ID_EX_Reg m_ID_EX_Reg(
    .clk(clk),
    .rst(rst_n),
    .PC_IDEX_i(PC_ID),
    .rd1_IDEX_i(rd1),
    .rd2_IDEX_i(rd2),
    .imm_IDEX_i (imm_ID),
    .rd_IDEX_i(rs_WB_ID),
    .ctrl_IDEX_i({regWrite_ID, memtoReg_ID, memRead_ID, memWrite_ID, ALUSrc_ID, ALUOp_ID, funct3_ID, funct7_ID}),
    .PC_IDEX_o(PC_EX),
    .rd1_IDEX_o(rd1_EX),
    .rd2_IDEX_o(rd2_EX),
    .imm_IDEX_o(imm_EX),
    .rd_IDEX_o(rs_WB_EX),
    .ctrl_IDEX_o({regWrite_EX, memtoReg_EX, memRead_EX, memWrite_EX, ALUSrc_EX, ALUOp_EX, funct3_EX, funct7_EX})
);

EX_MEM_Reg m_EX_MEM_Reg(
    .clk(clk),
    .rst(rst_n),
    .pc_i (PC_EX),
    .ALUOut_i (ALU_result_EX),
    .data_to_mem_i(rd2_EX),
    .rs_WB_i(rs_WB_EX),
    .WB_M_control_i({regWrite_EX, memtoReg_EX, memRead_EX, memWrite_EX}),
    .pc_o (PC_mem),
    .ALUOut_o  (ALU_result_mem),
    .data_to_mem_o(rd2_mem),
    .rs_WB_o      (rs_WB_mem),
    .WB_M_control_o({regWrite_mem, memtoReg_mem, memRead_mem, memWrite_mem})
    );

MEM_WB_Reg m_MEM_WB_Reg(
    .clk(clk),
    .rst(rst_n),
    .PC4_WB_i (PC_mem),
    .ALUOut_WB_i  (ALU_result_mem),
    .memReadData_WB_i(rd_mem),
    .rd_WB_i (rs_WB_mem),
    .ctrl_WB_i({regWrite_mem, memtoReg_mem}),
    .PC4_WB_o (PC_WB),
    .ALUOut_WB_o  (ALU_result_WB),
    .memReadData_WB_o (memRdata_WB),
    .rd_WB_o (rd),
    .ctrl_WB_o({regWrite, memtoReg_WB})
);

endmodule
