#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <math.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    char op;
    float num1, num2;

    printf("Digite um operador: \n");
    op = getche();

    printf("Digite o primeiro e o segundo operando em sequência: \n");
    scanf("%f %f", &num1, &num2);

    switch(op){
        case '+':
            printf("Soma: %.2f + %.2f = %.2f\n", num1, num2, num1+num2);
            break;
        case '-': 
            printf("Subtração: %.2f - %.2f = %.2f\n", num1, num2, num1-num2);
            break;
        case '*':
            printf("Multiplicação: %.2f * %.2f = %.2f\n", num1, num2, num1*num2);
            break;
        case '/':
            if(num2!=0){
                printf("Divisão: %.2f / %.2f = %.2f\n", num1, num2, num1/num2);

            } else{
                printf("ERRO: Não é possível dividir por zero\n");
            }
            break;
        case '^':
            printf("Potência: %.2f ^ %.2f\n", num1, num2, pow(num1,num2));
            break;
        default:
            printf("Erro: Opção inválida\n");
            break;
    }

    system("PAUSE");
    return 0;
}