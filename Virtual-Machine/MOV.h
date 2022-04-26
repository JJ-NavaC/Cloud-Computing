#ifndef MOV_h
#define MOV_h

#include <stddef.h>
#include <string>
#include "Instruction.h"

class MOV: public Instruction{
    string reg;
    int data;
    string name;
public:
    MOV(string,int);
    
    string getReg();
    int getData();
    string Type();
};
#endif