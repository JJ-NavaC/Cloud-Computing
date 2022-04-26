#ifndef STO_h
#define STO_h

#include <stddef.h>
#include <string>
#include "Instruction.h"

class STO: public Instruction{   
    string name;
public:
    STO(); 
    
    string Type();
};
#endif