#include <iostream>
#include <windows.h>

bool isValorantOpen() {
    HWND hwnd = FindWindow(NULL, TEXT("Warzone"));
    return hwnd != NULL;
}

int main() {
    if (!isValorantOpen()) {
        std::cout << "Waiting for Game..." << std::endl;
        while (!isValorantOpen()) {
            Sleep(5000);
        }
        std::cout << "Warzone is open!" << std::endl;
    }
    else {
        std::cout << "An unknown error occurred. Try again." << std::endl;
    }

    getchar();

    return 0;
}
