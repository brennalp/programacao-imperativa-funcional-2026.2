#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int num;
    long long int fatorial = 1;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    for(int i=1; i<=num; i++){
        fatorial*=i;
    }

    printf("O fatorial de %d é %lld.\n", num, fatorial);

    system("PAUSE");
    return 0;
}