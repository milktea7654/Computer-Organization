module MEM_WB_Reg(
    input  wire        clk,
    input  wire        rst,

    input  wire [31:0]  PC4_WB_i,
    input  wire [31:0]  ALUOut_WB_i,
    input  wire [31:0]  memReadData_WB_i,
    input  wire [31:0]  inst_i,
    input  wire [1:0]   memtoReg_i,  
    input  wire         regWrite_i,  


    output reg  [31:0]  PC4_WB_o,
    output reg  [31:0]  ALUOut_WB_o,
    output reg  [31:0]  memReadData_WB_o,
    output reg  [31:0]  inst_o,
    output reg  [1:0]   memtoReg_o,
    output reg          regWrite_o
);

always @(negedge clk or negedge rst) begin
    if (~rst) begin
        PC4_WB_o         <= 32'b0;
        ALUOut_WB_o      <= 32'b0;
        memReadData_WB_o <= 32'b0;
        inst_o           <= 32'b0;
        memtoReg_o       <= 2'b00;
        regWrite_o       <= 1'b0;
    end else begin
        PC4_WB_o         <= PC4_WB_i;
        ALUOut_WB_o      <= ALUOut_WB_i;
        memReadData_WB_o <= memReadData_WB_i;
        inst_o           <= inst_i;
        memtoReg_o       <= memtoReg_i;
        regWrite_o       <= regWrite_i;
    end
end

endmodule
