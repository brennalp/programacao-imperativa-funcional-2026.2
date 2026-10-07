#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int n, valor = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        
        for(int j=1; j<=i; j++){
            printf("%d", valor);
            valor++;
        }
        printf("\n");
    }

    system("PAUSE");
    return 0;
}