#include <stdio.h>

int main () {

    int A, B, soma, subtr, mult, div;

    printf("n1:\n");
    scanf("%d", &A);

    printf("n2: \n");
    scanf("%d", &B);

    soma =  A+B;
    subtr = A-B;
    mult = A*B;
    div = A/B;

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtr);
    printf("Multiplicação: %d\n", mult);
    printf("Divisão: %d\n", div);

    // ++/--
    // -= += /= *=
}