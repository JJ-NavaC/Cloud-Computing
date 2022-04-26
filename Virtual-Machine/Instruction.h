#ifndef Instruction_h
#define Instruction_h

#include <iostream>
#include <stddef.h>
#include <string>

using namespace std;

class Instruction {
	string instructionName;
	string regist;
	int op1, op2;

public:
	Instruction();
	
	void setInstruction(string); // START, END
	void setInstruction(string,string,int); // MOV, STO
	void setInstruction(string,string,int,int); // ADD, REST, MULT, DIV

	string getInstructionName();
	string getRegist();
	int getOp1();
	int getOp2();
	
	void printIns();
};


#endif
