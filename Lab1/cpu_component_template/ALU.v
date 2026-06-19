module ALU (
    input [3:0] ALUctl,
    input signed [31:0] A, B,
    output reg signed [31:0] ALUOut,
    output zero
);

    always @(*) begin
        case(ALUctl)
            4'b0010: ALUOut = A + B;         
            4'b0110: ALUOut = A - B;         
            4'b0000: ALUOut = A & B;         
            4'b0001: ALUOut = A | B;        
            4'b0111: ALUOut = (A < B) ? 32'd1 : 32'd0; 
            4'b0011: ALUOut = A ^ B;         
            default: ALUOut = 32'd0;
        endcase
    end

    assign zero = (ALUOut == 32'd0);
endmodule
