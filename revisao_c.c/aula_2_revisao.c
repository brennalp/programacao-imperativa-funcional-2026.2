#include <stdio.h>

int main () {

    int idade = 0;
    float peso = 0;

    printf("Valor inteiro: %d", 10);
    printf("Real: %f", 3.14);
    printf("Real com duas casas: %.2f", 3.4566);
    printf("Letra: %c", 'A');
    printf("Texto: %s", "testando");
    // % - especificador para imprimir a variável de acordo com o tipo

    scanf("Digite sua idade: %d\n", &idade);
    printf("Idade: %d\n", idade);

    scanf("Digite seu peso: %f\n", &peso);
    printf("Peso: %f\n", peso);
}