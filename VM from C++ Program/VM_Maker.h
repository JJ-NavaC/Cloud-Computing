#ifndef VM_Maker_h
#define VM_Maker_h

#include <stddef.h>
#include <string>

using namespace std;

class VM_Maker{
    string vBoxManage;
    string vm_name;
    string os_type;
    int cpus;
    int ram_memory;
    int v_ram;
    int disk_memory;
public:
    VM_Maker(string, string, int, int, int, int);

    void createVM();
    void addCpusRamVram();
    void addNetAdap();
    void createDiskMem();
    void addController();
    void addDiskMem();
    void addIdeCont();
};

#endif // !VM_Maker_h
