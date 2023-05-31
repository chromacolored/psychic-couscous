#include <windows.h>

BOOL WINAPI DllMain(
    HINSTANCE hModule,  // handle for DLL module
    DWORD fdwReason,    // calling the function
    LPVOID lpvReserved) // reserved
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH:
        MessageBoxW(NULL, L"this is a MESSAGE!", L"WHO IS THERE?!?!", MB_ICONQUESTION | MB_OK);
        break;
    }

    return TRUE;
}