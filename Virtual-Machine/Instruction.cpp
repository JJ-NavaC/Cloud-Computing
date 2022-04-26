#include "Instruction.h"
using namespace std;

Instruction::Instruction(){
	
}

void Instruction::setInstruction(string name){
	instructionName = name;
}

void Instruction::setInstruction(string name, string location, int x){
	instructionName = name;
	regist = location;
	op1 = x;
}

void Instruction::setInstruction(string name, string type, int x, int y){
	instructionName = name;
	regist = type;
	op1 = x;
	op2 = y;
}

void Instruction:: printIns(){
	cout << instructionName << endl;
}

string Instruction::getInstructionName(){
	return instructionName;
}

string Instruction::getRegist(){
	return regist;
}

int Instruction::getOp1(){
	return op1;
}

int Instruction::getOp2(){
	return op2;
}