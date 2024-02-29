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

    Vector#(16, Word) result = in;

    for(Integer i = 3; i >= 0; i = i - 1) begin
        if(shftAmnt[i] == 1) 
            result = naiveShfl(result, fromInteger(2**i));
    end

    return result;

endfunction
