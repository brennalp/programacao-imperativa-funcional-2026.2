#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    float a, b, c, delta;

    do{
        printf("Digite o coeficiente a (diferente de zero): \n");
        scanf("%f", &a);
    }while(a == 0);

    printf("Digite o coeficiente b e c da equação: \n");
    scanf("%f %f", &b, &c);

    delta =pow(b,2) - 4*a*c;

    if(delta<0){
        printf("A equação não possui raízes reais\n");
    } else if (delta == 0){
        printf("O valor da raiz única: %.2f\n", -b/(2*a));
    } else{
        printf("Os valores de x1: %.2f\nE x2: %.2f\n", (-b + sqrt(delta))/(2*a), (-b - sqrt(delta))/(2*a));
    }

    system("PAUSE");
    return 0;
}