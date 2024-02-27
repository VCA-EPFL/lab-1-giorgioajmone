import Vector::*;

typedef Bit#(16) Word;

function Vector#(16, Word) naiveShfl(Vector#(16, Word) in, Bit#(4) shftAmnt);
    Vector#(16, Word) resultVector = in; 
    for (Integer i = 0; i < 16; i = i + 1) begin
        Bit#(4) idx = fromInteger(i);
        resultVector[i] = in[shftAmnt+idx];
    end
    return resultVector;
endfunction


function Vector#(16, Word) barrelLeft(Vector#(16, Word) in, Bit#(4) shftAmnt);
    Vector#(16, Word) result = case(shftAmnt)
        4'd0: naiveShfl(in, 4'd0);
        4'd1: naiveShfl(in, 4'd1);
        4'd2: naiveShfl(in, 4'd2);
        4'd3: naiveShfl(in, 4'd3);
        4'd4: naiveShfl(in, 4'd4);
        4'd5: naiveShfl(in, 4'd5);
        4'd6: naiveShfl(in, 4'd6);
        4'd7: naiveShfl(in, 4'd7);
        4'd8: naiveShfl(in, 4'd8);
        4'd9: naiveShfl(in, 4'd9);
        4'd10: naiveShfl(in, 4'd10);
        4'd11: naiveShfl(in, 4'd11);
        4'd12: naiveShfl(in, 4'd12);
        4'd13: naiveShfl(in, 4'd13);
        4'd14: naiveShfl(in, 4'd14);
        4'd15: naiveShfl(in, 4'd15);
    endcase;
    return result;
endfunction
