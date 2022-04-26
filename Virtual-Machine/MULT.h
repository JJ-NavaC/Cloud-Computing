#ifndef MULT_h
#define MULT_h

#include <stddef.h>
#include "Instruction.h"

class MULT: public Instruction{
    int op1, op2;
    string name;
public:
    MULT(int,int);
    
    int getOp1();
    int getOp2();
    string Type();
};
#endif