module MEM_WB_Reg(
    input  wire        clk,
    input  wire        rst,

    input  wire [31:0]  PC4_WB_i,
    input  wire [31:0]  ALUOut_WB_i,
    input  wire [31:0]  memReadData_WB_i,
    input  wire [4:0]   rd_WB_i,
    input  wire [2:0]   ctrl_WB_i,  
    
    output reg  [31:0]  PC4_WB_o,
    output reg  [31:0]  ALUOut_WB_o,
    output reg  [31:0]  memReadData_WB_o,
    output reg  [4:0]   rd_WB_o,
    output reg  [2:0]   ctrl_WB_o
);

always @(posedge clk or negedge rst) begin
    if (~rst) begin
        PC4_WB_o <= 32'b0;
        ALUOut_WB_o <= 32'b0;
        memReadData_WB_o <= 32'b0;
        rd_WB_o <= 5'b0;
        ctrl_WB_o <= 3'b0;
    end else begin
        PC4_WB_o         <= PC4_WB_i;
        ALUOut_WB_o      <= ALUOut_WB_i;
        memReadData_WB_o <= memReadData_WB_i;
        rd_WB_o          <= rd_WB_i;
        ctrl_WB_o        <= ctrl_WB_i;
    end
end

endmodule
