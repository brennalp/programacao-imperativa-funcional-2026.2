#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3;
    float media;

    printf("\nDigite a nota 1: ");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("\nA nota do aluno: %.2f", media);

    system("PAUSE");

    return 0;
}