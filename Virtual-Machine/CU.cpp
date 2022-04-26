#include <iostream>
#include <string>
#include <sstream>

#include "CU.h"

using namespace std;

CU::CU(Memory &x, ALU &y, Register &z){
	end = false;
	program = x;
	alu = y;
	registr = z;
}

void CU::fetch(){
	cout << endl << endl << "-------------Fetch-------------" << endl << endl;
	// registr.setMAR((int*)registr.getPC());
	registr.setMAR(reinterpret_cast<int*>(registr.getPC()));
	registr.setMBR(program.getInstruction(registr.getPC()));
	registr.setIR(program.getInstruction(registr.getPC()));	
	decode(program.getInstruction(registr.getPC()));
}
void CU::decode(Instruction codedInstruction){
	registr.setPC(registr.getPC()+1); // Aumenta el PC (Program Counter) en +1
	cout << endl << endl << "-------------Decode-------------" << endl << endl;	
	cout << codedInstruction.getInstructionName() << endl;
	cout << endl << endl << "-------------Execute-------------" << endl << endl;	
	if(codedInstruction.getInstructionName()=="START"){
		registr.printR();
		return;
	} else if(codedInstruction.getInstructionName()=="END") {
		registr.printR();
		cout << "Memory 8: " << program.getValue(8) << endl;
		setEnd(true);
		return;
	} else if(codedInstruction.getInstructionName()=="ADD") {
		execute(codedInstruction.getInstructionName(), codedInstruction.getOp1(), codedInstruction.getOp2());
	} else if(codedInstruction.getInstructionName()=="REST") {
		execute(codedInstruction.getInstructionName(), codedInstruction.getOp1(), codedInstruction.getOp2());
	} else if(codedInstruction.getInstructionName()=="MULT") {
		execute(codedInstruction.getInstructionName(), codedInstruction.getOp1(), codedInstruction.getOp2());
	} else if(codedInstruction.getInstructionName()=="DIV") {
		execute(codedInstruction.getInstructionName(), codedInstruction.getOp1(), codedInstruction.getOp2());
	} else if(codedInstruction.getInstructionName()=="STO") {
		execute(codedInstruction.getRegist());
		program.addValue(8,registr.getACC()); // <<<<<<<---------- 
	} else if(codedInstruction.getInstructionName()=="MOV") {		
		execute(codedInstruction.getRegist(), codedInstruction.getOp1());
	}
	
}

void CU::execute(string instruction){
	registr.printR();
	return;
}

void CU::execute( string reg, int x){
	if(reg=="AL"){
		registr.setAL(x);
	} else if(reg=="BL"){	
		registr.setBL(x);
	} else if(reg=="AH"){	
		registr.setAH(x);
	} else if(reg=="BH"){	
		registr.setBH(x);
	}	
	registr.printR();
}

void CU::execute(string instruction, int x, int y){	
	if(instruction=="ADD"){
	/* 	registr.setAH(x);
		registr.setBH(y); */
		registr.setACC(alu.add(x,y));
	} else if (instruction=="REST"){
		/* registr.setAH(x);
		registr.setBH(y); */
		registr.setACC(alu.rest(x,y));
	} else if (instruction=="MULT"){
		/* registr.setAH(x);
		registr.setBH(y); */
		registr.setACC(alu.mult(x,y));
	} else if (instruction=="DIV"){
		/* registr.setAH(x);
		registr.setBH(y); */
		registr.setACC(alu.div(x,y));
	}
	registr.printR();
}

bool CU::End(){
	return end;
}

void CU::setEnd(bool f){
	end = f;
}