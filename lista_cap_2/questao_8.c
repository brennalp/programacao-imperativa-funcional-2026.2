#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, potencia;
    float divisao;

    printf("Digite um número: ");
    scanf("%d", &num);

    potencia = num*num;
    divisao = (float)num/10;

    printf("O valor ao quadrado: %d.\n", potencia);
    printf("O valor da divisão real: %.2f.\n", divisao);

    system("PAUSE");
    return 0;

}