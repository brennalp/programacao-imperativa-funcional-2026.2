#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    

    if(numero%2==0){
        printf("O número %d é par\n", numero);
    } else{
        printf("O número %d é ímpar\n", numero);
    }

    if (numero == 0){
        printf("O número %d é zero\n", numero);
    } else if (numero>0){
        printf("O número %d é positivo\n", numero);
    } else{
        printf("O número %d é negativo\n", numero);
    }


    system("PAUSE");
    return 0;
}