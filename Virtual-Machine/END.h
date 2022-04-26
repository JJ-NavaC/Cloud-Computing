#ifndef END_h
#define END_h

#include <stddef.h>
#include <string>
#include "Instruction.h"

class END: public Instruction{   
    string name;
public:
    END(); 
    
    string Type();
};
#endif