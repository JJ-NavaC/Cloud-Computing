#ifndef Memory_h
#define Memory_h

#include <iostream>
#include <stddef.h>
#include <string>

#include "Instruction.h"

using namespace std;

class Memory{
	Instruction* program;
	int* mem;
	
public:
	Memory();
	Memory(int);	
	void addInstruction(int,Instruction);
	Instruction getInstruction(int);
	int getValue(int);
	void addValue(int,int);
};

#endif
