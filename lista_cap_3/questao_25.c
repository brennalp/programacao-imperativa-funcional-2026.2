#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int N, divisores = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        while (N % i == 0)
        {
            divisores++;
            break;
        }
    }

    printf("Quantidade de divisores: %d\n", divisores);
    (divisores == 2) ? printf("%d e um numero primo.\n", N) : printf("%d nao e um numero primo.\n", N);
    

    system("PAUSE");
    return 0;
}