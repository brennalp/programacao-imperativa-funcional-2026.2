#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int saque, notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0;

    printf("Digite o valor do saque: R$ ");
    scanf("%d", &saque);

    while (saque >= 100)
    {
        saque = saque - 100;
        notas100++;
    }

    while (saque >= 50)
    {
        saque = saque - 50;
        notas50++;
    }

    while (saque >= 20)
    {
        saque = saque - 20;
        notas20++;
    }

    while (saque >= 10)
    {
        saque = saque - 10;
        notas10++;
    }

    while (saque >= 5)
    {
        saque = saque - 5;
        notas5++;
    }

    while (saque >= 2)
    {
        saque = saque - 2;
        notas2++;
    }

    printf("\nCedulas utilizadas:\n");
    printf("R$ 100: %d\n", notas100);
    printf("R$ 50:  %d\n", notas50);
    printf("R$ 20:  %d\n", notas20);
    printf("R$ 10:  %d\n", notas10);
    printf("R$ 5:   %d\n", notas5);
    printf("R$ 2:   %d\n", notas2);
    
    system("PAUSE");
    return 0;
}