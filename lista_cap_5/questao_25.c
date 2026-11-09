#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int mdc(int a, int b);
void simplifica(int num, int den);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2, resultado;

    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &num2);

    if(num1 <= 0 || num2 <= 0){
        printf("Valores inválidos. Digite números positivos.\n");
    } else{
        resultado = mdc(num1, num2);

        printf("MDC: %d\n", resultado);

        printf("Fração simplificada: ");
        simplifica(num1, num2);
    }

    system("PAUSE");
    return 0;
}

int mdc(int a, int b){
    if(b == 0){
        return a; // Caso base
    } else{
        return mdc(b, a % b); // Passo recursivo
    }
}

void simplifica(int num, int den){
    int divisor = mdc(num, den);

    printf("%d/%d\n", num / divisor, den / divisor);
}