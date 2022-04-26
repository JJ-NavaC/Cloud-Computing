#ifndef CU_h
#define CU_h

#include <stddef.h> 
#include <string>

#include "Memory.h"
#include "Instruction.h"
#include "START.h"
#include "END.h"
#include "ADD.h"
#include "REST.h"
#include "MULT.h"
#include "DIV.h"
#include "STO.h"
#include "MOV.h"
#include "Register.h"
#include "ALU.h"
#include "CU.h"

using namespace std;

class CU{	
	bool end;
	Memory program;
	ALU alu;
	Register registr;
	
public:
	CU(Memory&,ALU&,Register&);
	
	void fetch();
	void decode(Instruction);	
	void execute(string);
	void execute(string,int);
	void execute(string,int,int);
	bool End();
	void setEnd(bool);
	
};

#endif
