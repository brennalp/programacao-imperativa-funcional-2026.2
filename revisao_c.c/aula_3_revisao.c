#include <stdio.h>

#define texto "Entrada e saída de dados"

int main () {

    int idade = 0;
    float altura = 0;
    char nome[50] = "";

    printf("Digite a idade: %d \n", idade);
    scanf("%d", &idade);

    printf("Digite a altura: %f\n", altura);
    scanf("%f", &altura);

    printf("Digite o nome: %s\n", nome);
    scanf("%s", &nome);

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);

}