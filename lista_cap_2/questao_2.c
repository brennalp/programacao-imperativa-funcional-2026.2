#include <stdio.h>
#include <stdlib.h>

int main() {

    char letra;
    printf("Digite um caractere: ");
    scanf(" %c", &letra); //a função scanf interpreta o ENTER como separador de cada entrada, fazendo com que ignore espaços e quebras de linha
    printf("Cartere digitado: %c.\n", letra);

    system("PAUSE");
    return 0;
}