#ifndef DIV_h
#define DIV_h

#include <stddef.h>
#include "Instruction.h"

class DIV: public Instruction{
    int op1, op2;
    string name;
public:
    DIV(int,int);
    
    int getOp1();
    int getOp2();
    string Type();
};
#endif