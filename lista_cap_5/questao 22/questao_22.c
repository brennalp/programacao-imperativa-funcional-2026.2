#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "areas.h"

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    float raio, base, altura;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    printf("Área do círculo: %.2f\n", A_CIRC(raio));
    printf("Área do retângulo: %.2f\n", A_RET(base, altura));

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    printf("Área do triângulo: %.2f\n", A_TRI(base, altura));

    system("PAUSE");
    return 0;
}