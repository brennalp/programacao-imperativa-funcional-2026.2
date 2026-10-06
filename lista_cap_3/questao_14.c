#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    long int quadrado, soma;

    for (int i = 1; i <= 100; i++) {

        quadrado = i*i;
        printf("O quadrado de %d: %lld\n", i, quadrado);
        soma += quadrado;
    }

    printf("A soma dos quadrados é: %lld\n", soma);

    system("PAUSE");
    return 0;
}