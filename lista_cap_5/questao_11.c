#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPar(int n);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    resultado = ehPar(num);

    if(resultado == 1){
        printf("O numero é par.\n");
    } else{
        printf("O numero é impar.\n");
    }

    system("PAUSE");
    return 0;
}

int ehPar(int n){
    if(n % 2 == 0){
        return 1;
    } else{
        return 0;
    }
}