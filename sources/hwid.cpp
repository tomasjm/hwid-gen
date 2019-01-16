
#include <windows.h>
#include "../headers/hwid.h"

int Info_1;
int Info_2;
int Info_3;
int Info_4;
int Info_5;
int Info_6;

int getHWID()
{
    SYSTEM_INFO siSysInfo;

    GetSystemInfo(&siSysInfo);

    Info_1 = siSysInfo.dwOemId;
    Info_2 = siSysInfo.dwNumberOfProcessors;
    Info_3 = siSysInfo.dwProcessorType;
    Info_4 = siSysInfo.dwActiveProcessorMask;
    Info_5 = siSysInfo.wProcessorLevel;
    Info_6 = siSysInfo.wProcessorRevision;

    int HWID_Calculator[6] = {Info_1, Info_2, Info_3, Info_4, Info_5, Info_6};
    return HWID_Calculator[0, 1, 2, 3, 4, 5] * 2 * 4 * 8 * 16 * 32 * 64 * 120;
}