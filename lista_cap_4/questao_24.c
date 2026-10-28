#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    int angA, angB, angC;

    do {
        printf("Digite o valor do ângulo A: \n");
        scanf("%d", &angA);
    } while(angA<0 || angA>360);
    
    do {
        printf("Digite o valor do ângulo B: \n");
        scanf("%d", &angB);
    } while(angB<0 || angB>360);

    do {
        printf("Digite o valor do ângulo C: \n");
        scanf("%d", &angC);
    } while(angC<0 || angC>360);

    if(angA+angB+angC == 180 && angA > 0 && angB > 0 && angC > 0){
        if(angA==90 || angB==90 || angC==90){
            printf("Triângulo Retângulo\n");
        } else if(angA>90 || angB>90 || angC>90){
            printf("Triângulo Obtusângulo\n");
        } else{
            printf("Triângulo Acutângulo\n");
        }
    } else{
        printf("Erro: Os ângulos fornecidos não formam um triângulo\n");
    }

    system("PAUSE");
    return 0;
}