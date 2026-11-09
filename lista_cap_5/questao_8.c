#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int soma(int a, int b);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2, resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    resultado = soma(num1, num2);

    printf("Resultado da soma: %d\n", resultado);

    system("PAUSE");
    return 0;
}

int soma(int a, int b){
    return a + b;
}
