#include "REST.h"
using namespace std;

REST::REST(int x, int y) {
    op1 = x;
    op2 = y;
    name = "REST";
}

int REST::getOp1(){
    return op1;
}

int REST::getOp2(){
    return op2;
}

string REST::Type(){
    return name;
}