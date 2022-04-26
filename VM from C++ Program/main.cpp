#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <cstdlib>

#include "VM_Maker.h"
#include "Virtual_Machine.h"

using namespace std;

int main(){
    string name = "";
    string type = "";
    int cpus = 0;
    int ram = 0;
    int vram = 0;
    int diskmem = 0;

    system("clear");
    cout << "WELCOME TO VIRTUAL MACHINE MAKER" << endl;
    cout << "Type a name for your Virtual Machine: ";
    cin >> name;
    cout << "Type a OStype for your Virtual Machine: ";
    cin >> type;
    cout << "Type the number of CPU's for your Virtual Machine: ";
    cin >> cpus;
    cout << "Type the RAM Memory (MB) for your Virtual Machine: ";
    cin >> ram;
    cout << "Type the Video Memory (MB) for your Virtual Machine: ";
    cin >> vram;
    cout << "Type the Disk Memory (Storage)-(MB) for your Virtual Machine: ";
    cin >> diskmem;
    
    VM_Maker vm_m1(name,type,cpus,ram,vram,diskmem);
    Virtual_Machine vm1(name,type,cpus,ram,vram,diskmem);
    system("clear");
    cout << "Creating the Virtual Machine..." << endl;
    sleep(3);
    vm_m1.createVM();
    system("clear");
    cout << "Attaching CPU's, RAM and VRAM..." << endl;
    sleep(3);    
    vm_m1.addCpusRamVram();
    system("clear");
    cout << "Attaching Network Adapter..." << endl;
    sleep(3);    
    vm_m1.addNetAdap();
    system("clear");
    cout << "Creating Disk Memory (storage)..." << endl;
    sleep(3);    
    vm_m1.createDiskMem();
    system("clear");
    cout << "Attaching SATA Controller..." << endl;
    sleep(3);    
    vm_m1.addController();
    system("clear");
    cout << "Attaching Disk Memory (storage)..." << endl;
    sleep(3);    
    vm_m1.addDiskMem();
    system("clear");
    cout << "Attaching IDE Controller..." << endl;
    sleep(3);  
    system("clear");
    cout << "Finishing..." << endl; 
    vm_m1.addIdeCont(); 
    sleep(3);   
    system("clear");
    cout << "DONE :)" << endl;

    return 0;
}