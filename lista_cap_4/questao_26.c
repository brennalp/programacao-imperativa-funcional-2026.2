#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int mes, ano;

    printf("Digite o valor do mês: \n");
    scanf("%d", &mes);

    do{
        printf("Digite o ano: \n");
        scanf("%d", &ano);
    }while(ano<=0);

    switch (mes) {
        case 1:
            printf("O mês de janeiro possui 31 dias\n");
            break;
        case 2:
            if(ano%400==0 || (ano%4==0 && ano%100!=0)){
                printf("O ano %d é bissexto e o mês de fevereiro possui 29 dias.\n", ano);
            } else{
                printf(" O ano de %d não é bissexto e o mês de fevereiro possui 28 dias\n", ano);
            }
            break;
        case 3:
            printf("O mês de março possui 31 dias\n");
            break;
        case 4:
            printf("O mês de abril possui 30 dias\n");
            break;
        case 5:
            printf("O mês de maio possui 31 dias\n");
            break;
        case 6:
            printf("O mês de junho possui 30 dias\n");
            break;
        case 7:
            printf("O mês de julho possui 31 dias\n");
            break;
        case 8:
            printf("O mês de agosto possui 31 dias\n");
            break;
        case 9:
            printf("O mês de setembro possui 30 dias\n");
            break;
        case 10:
            printf("O mês de outubro possui 31 dias\n");
            break;
        case 11:
            printf("O mês de novembro possui 30 dias\n");
            break;
        case 12:
            printf("O mês de dezembro possui 31 dias\n");
            break;
        default:
            printf("Erro: Mês inválido.\n");
            break;
    }

    system("PAUSE");
    return 0;
}