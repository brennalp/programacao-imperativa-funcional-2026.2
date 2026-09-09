#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleOutput(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float quadrado, retangulo, triangulo;
    float lado, altura_retangulo, base_retangulo, altura_triangulo, base_triangulo; 

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura_retangulo);

    printf("Digite a base do triângulo: ");
    scanf("%f", &base_retangulo);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura_triangulo);

    quadrado = lado*lado;
    retangulo = base_retangulo*altura_retangulo;
    triangulo = (base_triangulo*altura_triangulo)/2;

    printf("A área do quadrado é: %.2f.\n", quadrado);
    printf("A área do retângulo é: %.2f.\n", retangulo);
    printf("A área do triângulo é: %.2f.\n", triangulo);

    system("PAUSE");
    return 0;
}