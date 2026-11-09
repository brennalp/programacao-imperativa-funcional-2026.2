#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float soma(float a, float b);
float subtrai(float a, float b);
float multiplica(float a, float b);
float divide(float a, float b);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float num1, num2, resultado;

    printf("===== CALCULADORA =====\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("Digite o primeiro valor: ");
    scanf("%f", &num1);

    printf("Digite o segundo valor: ");
    scanf("%f", &num2);

    switch(opcao){
        case 1:
            resultado = soma(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = subtrai(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = multiplica(num1, num2);
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if(num2 == 0){
                printf("Erro: não é possível dividir por zero.\n");
            } else{
                resultado = divide(num1, num2);
                printf("Resultado: %.2f\n", resultado);
            }
            break;
        default:
            printf("Opção inválida.\n");
    }

    system("PAUSE");
    return 0;
}

float soma(float a, float b){
    return a + b;
}

float subtrai(float a, float b){
    return a - b;
}

float multiplica(float a, float b){
    return a * b;
}

float divide(float a, float b){
    return a / b;
}