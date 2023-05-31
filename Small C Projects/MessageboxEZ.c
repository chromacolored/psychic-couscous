#include <windows.h>

int main(void) {

    MessageBoxW(
        NULL,
        L"This message box is a test.",
        L"Hello World!",
        MB_YESNOCANCEL | MB_ICONEXCLAMATION
    );
    return EXIT_SUCCESS;
}