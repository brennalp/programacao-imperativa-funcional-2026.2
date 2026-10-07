#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num, inverso = 0, digito;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    while (num > 0) {

        digito = num % 10;
        inverso = inverso * 10 + digito;
        num = num / 10;
    }

    printf("Numero invertido: %d\n", inverso);

    system("PAUSE");
    return 0;
}