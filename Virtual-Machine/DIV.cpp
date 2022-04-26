#include "DIV.h"
using namespace std;

DIV::DIV(int x, int y) {
    op1 = x;
    op2 = y;
    name = "DIV";
}

int DIV::getOp1(){
    return op1;
}

int DIV::getOp2(){
    return op2;
}

string DIV::Type(){
    return name;
}