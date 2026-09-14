#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //imprime múltiplos de 3
    for (int i= 3; i<=100; i++){
        printf("%2d/t", i);
    }

    system("PAUSE");
    return 0;
}