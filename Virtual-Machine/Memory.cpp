#include "Memory.h"
using namespace std;
Memory::Memory()
{
	program = new Instruction[10];
	mem = new int[10];
}

Memory::Memory(int size)
{
	program = new Instruction[size];
	mem = new int[size];
}

void Memory::addInstruction(int id, Instruction instruction)
{
	program[id] = instruction;
}

Instruction Memory::getInstruction(int id)
{
	return program[id];
}

int Memory::getValue(int n){
	return mem[n];
}

void Memory::addValue(int n, int x){
	mem[n] = x;
}