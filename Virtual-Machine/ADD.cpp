#include "ADD.h"
using namespace std;

ADD::ADD(int x, int y) {
    op1 = x;
    op2 = y;
    name = "ADD";
}

int ADD::getOp1(){
    return op1;
}

int ADD::getOp2(){
    return op2;
}

string ADD::Type(){
    return name;
}