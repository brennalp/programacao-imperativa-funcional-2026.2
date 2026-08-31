#include <stdio.h>
#include <stdlib.h>

int main() {

    int num1, num2, soma, subtracao, multiplicao;
    float divisao;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    soma = num1+num2;
    subtracao = num1-num2;
    multiplicao = num1*num2;
    divisao = (float)num1/num2; //eu evitaria a divisão por zero colocando a operação dessa variável dentro de um operador ternário

    /*divisao = (num2!0) ? (float)num1/num2 : 0*/
    

    printf("O valor da soma: %d.\n", soma);
    printf("O valor da subtração: %d.\n", subtracao);
    printf("O valor da multiplicação: %d.\n", multiplicao);
    printf("O valor da divisão real: %.2f.\n", divisao);

    system("PAUSE");
    return 0;

}