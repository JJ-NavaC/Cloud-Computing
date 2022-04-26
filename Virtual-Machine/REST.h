#ifndef REST_h
#define REST_h

#include <stddef.h>
#include "Instruction.h"

class REST: public Instruction{
    int op1, op2;
    string name;
public:
    REST(int,int);
    
    int getOp1();
    int getOp2();
    string Type();
};
#endif