#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    for (int i = 32; i <= 126; i++) {
        printf("%d\t%X\t%c\n", i, i, i);
    }


    system("PAUSE");
    return 0;
}