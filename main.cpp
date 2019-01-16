#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
//#include "headers/md5.h"
#include "headers/hwid.h"
#include "headers/sha256.h"

using namespace std;

int HWID;

int main()
{
    SetConsoleTitle(TEXT("Eternium | HWID generator"));
    SHA256 sha;
    HWID = getHWID();
    auto s = to_string(HWID);
    cout << "Tu HWID es: " << sha(s) << endl
         << endl;
    cout << "Ingresala en configuracion de hwid" << endl;
    cout << "www.eternium.pw" << endl
         << endl;

    getch();
}
