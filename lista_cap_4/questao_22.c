#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int codigo;
    float valor,imposto;

   
    printf("Digite o valor do código (1=MG, 2=SP, 3=RJ, 4=MS): \n");
    scanf("%d", &codigo);

    do{
        printf("Digite o valor do produto: \n");
        scanf("%f", &valor);
    }while(valor<0);

    switch (codigo){
        case 1:
            imposto = valor*0.07;
            printf("Valor do imposto: R$ %.2f\n", imposto);
            printf("Preço final: R$ %.2f\n", valor+imposto);
            break;
        case 2:
            imposto = valor*0.12;
            printf("Valor do imposto: R$ %.2f\n", imposto);
            printf("Preço final: R$ %.2f\n", valor+imposto);
            break;
        case 3:
            imposto = valor*0.15;
            printf("Valor do imposto: R$ %.2f\n", imposto);
            printf("Preço final: R$ %.2f\n", valor+imposto);
            break;
        case 4:
            imposto = valor*0.08;
            printf("Valor do imposto: R$ %.2f\n", imposto);
            printf("Preço final: R$ %.2f\n", valor+imposto);
            break;
        default:
            printf("Erro: Código inválido");
            break;
    }

    system("PAUSE");
    return 0;
}