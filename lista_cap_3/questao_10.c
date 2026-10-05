#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    for (int i = 1; i <= 100; i+=3) {

        printf("%d\t", i);

        (i % 10 == 0) ? printf("\n") : 0;
    }

    system("PAUSE");
    return 0;
}