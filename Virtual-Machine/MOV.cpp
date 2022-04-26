#include "MOV.h"
using namespace std;

MOV::MOV(string x, int y) {
    reg = x;
    data = y;
    name = "MOV";
}

string MOV::getReg(){
    return reg;
}

int MOV::getData(){
    return data;
}

string MOV::Type(){
    return name;
}