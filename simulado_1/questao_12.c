#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float nota;

    do {
        printf("\nDigite uma nota de 0 a 10: ");
        scanf("%f", &nota);

        (nota<=0 || nota>=10) ? printf("\nDigite uma nota válida.") : 0;

    } while(nota<=0 || nota>=10);

    system("PAUSE");
    return 0;
}