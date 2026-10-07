#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int A, B, numero, divisor, divisores, soma = 0;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    for (numero = A; numero <= B; numero++)
    {
        divisores = 0;
        for (divisor = 1; divisor <= numero; divisor++)
        {
            while (numero % divisor == 0)
            {
                divisores++;
                break;
            }
        }

        while (divisores == 2)
        {
            printf("%d ", numero);
            soma += numero;
            break;
        }
    }

    printf("\nSoma dos numeros primos: %d\n", soma);

    system("PAUSE");
    return 0;
}