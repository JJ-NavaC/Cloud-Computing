#ifndef ALU_h
#define ALU_h

#include <stdio.h>
#include <iostream>
#include <stddef.h>

using namespace std;

class ALU{
	
	int operand_1;
	int operand_2;
	
public:
	ALU();
	
	int getOperand_1();
	int getOperand_2();
	
	int add(int,int);
	int rest(int,int);
	int mult(int,int);
	int div(int,int);
	
};
#endif
