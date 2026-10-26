#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float laboratorio, semestral, final, media;

    do{
        printf("Digite a nota de Trabalho de Laboratório: ");
        scanf("%f", &laboratorio);
    } while (laboratorio<0 || laboratorio>10);

    do{
        printf("Digite a nota de Avaliação Semestral: ");
        scanf("%f", &semestral);
    } while (semestral<0  || semestral>10);

    do{
        printf("Digite a nota do Exame Final: ");
        scanf("%f", &final);
    } while (final<0  || final>10);

    media = ((laboratorio*2)+(semestral*3)+(final*5))/10;

    if(media>=5){
        printf("Aprovado: %.2f\n", media);
    } else if(media>=3){
        printf("Em recuperação: %.2f\n", media);
    } else {
        printf("Reprovado: %.2f\n", media);
    }

    system("PAUSE");
    return 0;
}