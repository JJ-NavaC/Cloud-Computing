#ifndef ADD_h
#define ADD_h

#include <stddef.h>
#include "Instruction.h"

class ADD: public Instruction{
    int op1, op2;
    string name;
public:
    ADD(int,int);
    
    int getOp1();
    int getOp2();
    string Type();
};
#endif