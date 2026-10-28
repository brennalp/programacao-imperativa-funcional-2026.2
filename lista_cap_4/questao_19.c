#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    float ladoA, ladoB, ladoC;

    do {
        printf("Digite o valor do lado A: \n");
        scanf("%f", &ladoA);
    } while(ladoA<=0);
    
    do {
        printf("Digite o valor do lado B: \n");
        scanf("%f", &ladoB);
    } while(ladoB<=0);

    do {
        printf("Digite o valor do lado C: \n");
        scanf("%f", &ladoC);
    } while(ladoC<=0);

    if(ladoA<ladoB+ladoC && ladoB<ladoA+ladoC && ladoC<ladoA+ladoB){
        if(ladoA == ladoB && ladoB == ladoC){
            printf("Triângulo Equilátero\n");
        } else if(ladoA == ladoB || ladoA == ladoC || ladoB == ladoC){
            printf("Triângulo Isósceles\n");
        } else{
            printf("Triângulo Escaleno\n");
        }
    } else{
        printf("Erro: Os lados fornecidos não formam um triângulo\n");
    }

    system("PAUSE");
    return 0;
}