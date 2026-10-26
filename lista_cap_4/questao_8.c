#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int numero;

    do{
        printf("Digite um número inteiro positivo: ");
        scanf("%d", &numero);
    } while (numero<=0);

    if(numero%400==0 || numero%4==0 && numero%100!=0){
        printf("O ano %d é bissexto\n", numero);
    } else {
        printf("O ano %d não é bissexto\n", numero);
    }
    system("PAUSE");
    return 0;
}