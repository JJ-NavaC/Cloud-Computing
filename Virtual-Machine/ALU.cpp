#include "ALU.h"

using namespace std;

ALU::ALU(){
	
}

int ALU::getOperand_1(){
	return operand_1;
}

int ALU::getOperand_2(){
	return operand_2;
}

int ALU::add(int a, int b){
	int aux = 0;
	__asm__ ( "addl %%ebx, %%eax;" : "=a" (aux) : "a" (a) , "b" (b) );
	return aux;
}

int ALU::rest(int a, int b){
	int aux = 0;
	__asm__ ( "subl %%ebx, %%eax;" : "=a" (aux) : "a" (a) , "b" (b) );
	return aux;
}

int ALU::mult(int a, int b){
	int aux = 0;
	__asm__ ( "imull %%ebx, %%eax;" : "=a" (aux) : "a" (a) , "b" (b) );
	return aux;
}

int ALU::div(int a, int b){
	int aux = 0, res = 0;
	__asm__ ( "movl $0x0, %%edx;"
					 "movl %2, %%eax;"
					 "movl %3, %%ebx;"
					 "idivl %%ebx;" : "=a" (aux), "=d" (res) : "a" (a), "b" (b) );
	return aux;
}
