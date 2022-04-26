#include "MULT.h"
using namespace std;

MULT::MULT(int x, int y) {
    op1 = x;
    op2 = y;
    name = "MULT";
}

int MULT::getOp1(){
    return op1;
}

int MULT::getOp2(){
    return op2;
}

string MULT::Type(){
    return name;
}