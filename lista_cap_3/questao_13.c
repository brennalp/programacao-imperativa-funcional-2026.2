#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num;
    long long int fatorial = 1;
    
    do {
        printf("\nDigite um número inteiro: ");
        scanf("%d", &num);

        (num<0) ? printf("\nDigite um número positivo.") : 0;

    } while (num<0);

    for(int i=1; i<=num; i++){
        fatorial*=i;
    }

    printf("O fatorial de %d é %lld.\n", num, fatorial);

    system("PAUSE");
    return 0;
}