#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int num1, num2, num3;

    //semente para que sejam gerados valores aleatórios a cada rodada
    //faz com que eles não se repitam
    //a função time conta os segundos desde 1 de janeiro de 1970
    srand(time(NULL));

    //gera um número aleatório de 0 a 6: a divisão por 6 faz com que o intervalo seja de 0 a 5
    //por isso, soma-se 1 para que fique de 1 a 6
    num1 = (rand()%6)+1;
    num2 = (rand()%6)+1;
    num3 = (rand()%6)+1;

    printf("Dado 1: %d.\n", num1);
    printf("Dado 2: %d.\n", num2);
    printf("Dado 3: %d.\n", num3);

    system("PAUSE");
    return 0;
}