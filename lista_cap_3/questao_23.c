#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int L, i, j;

    printf("Digite a dimensao do quadrado (3 a 20): ");
    scanf("%d", &L);

    for (i = 1; i <= L; i++)
    {
        /* Primeira linha */
        while (i == 1)
        {
            for (j = 1; j <= L; j++)
            {
                printf("X");
            }
            break;
        }

        /* Linhas do meio */
        while (i > 1 && i < L)
        {
            printf("X");
            for (j = 1; j <= L - 2; j++)
            {
                printf(" ");
            }
            printf("X");
            break;
        }

        /* Última linha */
        while (i == L)
        {
            for (j = 1; j <= L; j++)
            {
                printf("X");
            }
            break;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}