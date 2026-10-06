#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num, i;

    printf("Digite um número limite: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        (i%3 == 0) && (i%5 == 0) ? printf("%d\t", i) : printf("Não há números mútiplos de 3 e 5 ao mesmo tempo.\n");
    }

    system("PAUSE");
    return 0;
}