#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int maior(int a, int b);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = maior(num1, num2);

    printf("Maior numero: %d\n", resultado);

    system("PAUSE");
    return 0;
}

int maior(int a, int b){
    if(a > b){
        return a;
    } else{
        return b;
    }
}