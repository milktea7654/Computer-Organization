module Control (
    input [6:0] opcode,
    input [2:0] funct3,
    input BrEq, BrLT,
    output reg memRead,
    output reg [1:0] memtoReg,
    output reg [1:0] ALUOp,
    output reg memWrite,
    output reg ALUSrc,
    output reg regWrite,
    output reg [1:0] PCSel
);

    // TODO: implement your Control here
    // Hint: follow the Architecture (figure in spec) to set output signal
    always @(*) begin
        case (opcode)
            7'b0000011: begin 
                memtoReg = 2'b01;
                regWrite = 1;
                ALUOp = 2'b00;
                memWrite = 0;
                PCSel = 2'b00; 
                ALUSrc = 1;
                memRead = 1;
            end
            7'b0010011: begin 
                memtoReg = 2'b00;
                regWrite = 1;
                ALUOp = 2'b10;
                memWrite = 0;
                PCSel = 2'b00; 
                ALUSrc = 1;
                memRead = 0;
            end
            7'b0100011: begin 
                memtoReg = 2'bxx;
                regWrite = 0;
                ALUOp = 2'b00;
                memWrite = 1;
                PCSel = 2'b00; 
                ALUSrc = 1;
                memRead = 0;
            end
            7'b0110011: begin 
                memtoReg = 2'b00;
                regWrite = 1;
                ALUOp = 2'b10;
                memWrite = 0;
                PCSel = 2'b00; 
                ALUSrc = 0;
                memRead = 0;
            end
            7'b1100011: begin 
                memtoReg = 2'bxx;
                regWrite = 0;
                ALUOp = 2'b01;
                memWrite = 0;
                PCSel = 2'b00; 
                ALUSrc = 0;
                memRead = 0;
                case (funct3)
                    3'b000: PCSel = (BrEq) ? 2'b01 : 2'b00; 
                    3'b001: PCSel = (!BrEq) ? 2'b01 : 2'b00; 
                    3'b100: PCSel = (BrLT) ? 2'b01 : 2'b00; 
                    3'b101: PCSel = (!BrLT || BrEq) ? 2'b01 : 2'b00;
                    default: PCSel = 2'b00; 
                endcase
            end
            7'b1100111: begin 
                memtoReg = 2'b10;
                regWrite = 1;
                ALUOp = 2'b00;
                memWrite = 0;
                PCSel = 2'b10; 
                ALUSrc = 1;
                memRead = 0;
            end
            7'b1101111: begin 
                memtoReg = 2'b10;
                regWrite = 1;
                ALUOp = 2'bxx;
                memWrite = 1;
                PCSel = 2'b01; 
                ALUSrc = 0;
                memRead = 0;
            end
            default: begin 
                memtoReg = 2'bxx;
                regWrite = 0;
                ALUOp = 2'bxx;
                memWrite = 0;
                PCSel = 2'b00; 
                ALUSrc = 0;
                memRead = 0;
            end
        endcase
    end

endmodule

