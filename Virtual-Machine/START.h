#ifndef START_h
#define START_h

#include <stddef.h>
#include <string>
#include "Instruction.h"

class START: public Instruction{   
    string name;
public:
    START(); 
    
    string Type();
};
#endif