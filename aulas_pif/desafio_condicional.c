#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int soma = 0, n;

    do{
        printf("Digite um número positivo: ");
        scanf("%d", &n);
    } while(n<0);

    for(int i=0; i<n; i++){
        soma+=(2*i+1);
    }

    printf("O quadrado de %d é: %d\n", n, soma);

    system("PAUSE");
    return 0;
}
