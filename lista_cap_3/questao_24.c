#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
     int N, i, j;
    int espacos, meio;

    printf("Digite uma dimensao impar (3 a 19): ");
    scanf("%d", &N);

    meio = (N + 1) / 2;

    for (i = 1; i <= N; i++)
    {
        espacos = i - 1;

        while (i > meio)
        {
            espacos = N - i;
            break;
        }

        for (j = 1; j <= espacos; j++)
        {
            printf(" ");
        }
        printf("*");

        espacos = N - 2 * espacos - 1;
        for (j = 1; j <= espacos; j++)
        {
            printf(" ");
        }

        while (i != meio)
        {
            printf("*");
            break;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}