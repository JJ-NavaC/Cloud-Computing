// g++ ADD.h ADD.cpp ALU.h ALU.cpp CPU.h CPU.cpp CU.h CU.cpp DIV.h DIV.cpp END.h END.cpp Instruction.h Instruction.cpp main.cpp Memory.h Memory.cpp MOV.h MOV.cpp MULT.h MULT.cpp ProgramLoader.h ProgramLoader.cpp Register.h Register.cpp REST.h REST.cpp START.h START.cpp STO.h STO.cpp VirtualMachine.h VirtualMachine.cpp -o main
#include <iostream>
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

int main(){	
	
	Register registr;
	ALU alu;		
	Memory program;
	Instruction Start, Mov1, Mov2, Add, Sto, End;
	
	START start;
	MOV i1("AL",10);
	MOV i2("BL",12);
	ADD i3(10,12);
	STO i4;
	END end;
	program.addValue(i1.getData(),5);
	program.addValue(i2.getData(),5); 

	Start.setInstruction(start.Type());
	Mov1.setInstruction(i1.Type(), i1.getReg(), program.getValue(i1.getData()));
	Mov2.setInstruction(i2.Type(), i2.getReg(), program.getValue(i2.getData()));
	Add.setInstruction(i3.Type(), i3.Type(), program.getValue(i1.getData()), program.getValue(i2.getData()));
	Sto.setInstruction(i4.Type());
	End.setInstruction(end.Type());

	program.addInstruction(1,Start);
	program.addInstruction(2,Mov1);
	program.addInstruction(3,Mov2);
	program.addInstruction(4,Add);
	program.addInstruction(5,Sto);
	program.addInstruction(6,End);
	CU cu(program,alu,registr);

	while(!cu.End()){
		cu.fetch();
	} 
	
	
	return 0; 	   
}
	
