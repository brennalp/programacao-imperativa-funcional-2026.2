#include <stdio.h>
#include <stdlib.h>

int main(){
    //perguntar se precisa de base e altura diferentes

    float quadrado, retangulo, triangulo;
    float lado, altura, base; 

    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite a base: ");
    scanf("%f", &base);

    quadrado = lado*lado;
    retangulo = base*altura;
    triangulo = (base*altura)/2;

    printf("A área do quadrado é: %.2f rad.\n", quadrado);
    printf("A área do retângulo é: %.2f rad.\n", retangulo);
    printf("A área do triângulo é: %.2f rad.\n", triangulo);

    system("PAUSE");
    return 0;
}