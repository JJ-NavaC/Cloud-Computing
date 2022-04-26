#include <iostream>
#include <string>

#include "VM_Maker.h"

using namespace std;

VM_Maker::VM_Maker(string _vm_name, string _os_type, int _cpus, int _ram_memory, int _v_ram, int _disk_memory){
    vBoxManage = "VBoxManage";
    vm_name = _vm_name;
    os_type = _os_type;
    cpus = _cpus;
    ram_memory = _ram_memory;
    v_ram = _v_ram;
    disk_memory = _disk_memory;
}

void VM_Maker::createVM(){
    string aux = vBoxManage + " createvm --name " + vm_name + " --ostype " + os_type + " --register";
    char* cmd;
    cmd = new char[aux.length()];
    for (int i = 0; i < aux.length(); i++) {
        cmd[i] = aux[i];
    }    
    // cout << cmd << endl;
    system(cmd);
}

void VM_Maker::addCpusRamVram() {
    string aux = vBoxManage + " modifyvm " + vm_name + " --cpus " + to_string(cpus) + " --memory " + to_string(ram_memory) + " --vram " + to_string(v_ram);
    char* cmd;
    cmd = new char[aux.length()];
    for (int i = 0; i < aux.length(); i++) {
        cmd[i] = aux[i];
    }    
    // cout << cmd << endl;
    system(cmd);
}

void VM_Maker::addNetAdap() {
    string aux = vBoxManage + " modifyvm " + vm_name + " --nic1 NAT";
    char* cmd;
    cmd = new char[aux.length()];
    for (int i = 0; i < aux.length(); i++) {
        cmd[i] = aux[i];
    }    
    // cout << cmd << endl;
    system(cmd);
}

void VM_Maker::createDiskMem() {
    string aux = vBoxManage + " createhd --filename ~/VirtualBox\\ VMs/UbuntOSX --size " + to_string(disk_memory);
    char* cmd;
    cmd = new char[aux.length()];
    for (int i = 0; i < aux.length(); i++) {
        cmd[i] = aux[i];
    }    
    // cout << cmd << endl;
    system(cmd);
}

void VM_Maker::addController() {
    string aux = vBoxManage + " storagectl " + vm_name + " --name 'SATA Controller' --add sata --bootable on";
    char* cmd;
    cmd = new char[aux.length()];
    for (int i = 0; i < aux.length(); i++) {
        cmd[i] = aux[i];
    }    
    // cout << cmd << endl;
    system(cmd);    
}

void VM_Maker::addDiskMem() {
    string aux = vBoxManage + " storageattach " + vm_name + " --storagectl 'SATA Controller' --port 0 --device 00 --type hdd --medium ~/VirtualBox\\ VMs/UbuntOSX.vdi";
    char* cmd;
    cmd = new char[aux.length()];
    for (int i = 0; i < aux.length(); i++) {
        cmd[i] = aux[i];
    }    
    // cout << cmd << endl;
    system(cmd);    
}

void VM_Maker::addIdeCont() {  
    string aux = vBoxManage + " storagectl " + vm_name + " --storagectl 'IDE Controller' --add ide";
    char* cmd;
    cmd = new char[aux.length()];
    for (int i = 0; i < aux.length(); i++) {
        cmd[i] = aux[i];
    }    
    // cout << cmd << endl;
    system(cmd);

    string aux2 = vBoxManage + " storageattach " + vm_name + " --storagectl 'IDE Controller' --port 0 --device 0 --type dvddrive --medium /home/navarq/Downloads/ubuntu-20.04.4-desktop-amd64.iso";
    char* cmd2;
    cmd2 = new char[aux2.length()];
    for (int i = 0; i < aux2.length(); i++) {
        cmd2[i] = aux2[i];
    }    
    // cout << cmd2 << endl;
    system(cmd2);
}