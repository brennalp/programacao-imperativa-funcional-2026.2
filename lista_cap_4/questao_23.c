#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int dia, mes, ano;
   
    do{
        printf("Digite o dia: \n");
        scanf("%d", &dia);
    }while(dia<=0 || dia>31);

    printf("Digite o valor do mês: \n");
    scanf("%d", &mes);

    do{
        printf("Digite o ano: \n");
        scanf("%d", &ano);
    }while(ano<0);

    switch (mes) {
        case 1:
            printf("%d de janeiro de %d\n", dia, ano);
            break;
        case 2:
            if(dia>28){
                printf("Este dia não existe.\n");
            } else{
                printf("%d de fevereiro de %d\n", dia, ano);
            }
            break;
        case 3:
            printf("%d de março de %d\n", dia, ano);
            break;
        case 4:
            if(dia>30){
                printf("Este dia não existe.\n");
            } else{
                printf("%d de abril de %d\n", dia, ano);
            }
            break;
        case 5:
            printf("%d de maio de %d\n", dia, ano);
            break;
        case 6:
            if(dia>30){
                printf("Este dia não existe.\n");
            } else{
                printf("%d de junho de %d\n", dia, ano);
            }
            break;
        case 7:
            printf("%d de julho de %d\n", dia, ano);
            break;
        case 8:
            printf("%d de agosto de %d\n", dia, ano);
            break;
        case 9:
            if(dia>30){
                printf("Este dia não existe.\n");
            } else{
                printf("%d de setembro de %d\n", dia, ano);
            }
            break;
        case 10:
            printf("%d de outubro de %d\n", dia, ano);
            break;
        case 11:
            if(dia>30){
                printf("Este dia não existe.\n");
            } else{
                printf("%d de novembro de %d\n", dia, ano);
            }
            break;
        case 12:
            printf("%d de dezembro de %d\n", dia, ano);
            break;
        default:
            printf("Erro: Mês inválido.\n");
            break;
    }

    system("PAUSE");
    return 0;
}