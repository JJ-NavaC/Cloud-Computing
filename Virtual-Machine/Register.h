#ifndef Register_h
#define Register_h

#include <iostream>
#include <stddef.h>
#include <string>

#include "Instruction.h"

using namespace std;

class Register{
	int pc;
	Instruction ir;
	int acc;
	int* mar;
	Instruction mbr;
	int al;
	int ah;
	int bl;
	int bh;
	
public:
	
	Register();
	
	int getPC();
	Instruction getIR();
	int getACC();
	int* getMAR();
	Instruction getMBR();
	int getAL();
	int getAH();
	int getBL();
	int getBH();
	
	void setPC(int);
	void setIR(Instruction);
	void setACC(int);
	void setMAR(int*);
	void setMBR(Instruction);
	void setAL(int);
	void setAH(int);
	void setBL(int);
	void setBH(int);
	void printR();
};
#endif
