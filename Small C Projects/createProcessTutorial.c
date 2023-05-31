#include <windows.h>
#include <stdio.h>

int main(void)
{

    // this is a pointer
    // STARTUPINFOW - Specifies the window station, desktop, standard handles, and appearance of the main window for a process at creation time.
    STARTUPINFOW si = {0};
    PROCESS_INFORMATION pi = {0};
    // This loop will return the last error thread value to show the error.
    if (!CreateProcessW(
            L"C:\\Windows\\System32\\notepad.exe",
            NULL,
            NULL,
            NULL,
            FALSE,
            BELOW_NORMAL_PRIORITY_CLASS,
            NULL,
            NULL,
            &si,
            &pi))
    {
        // print the error code as to why the process could no be started
        printf("(-) failed to create process, error: %ld", GetLastError());
        return EXIT_FAILURE;
    }
    // print the success if the process was started
    printf("(+) process has started! pid: %ld", pi.dwProcessId);
    return EXIT_SUCCESS;
}