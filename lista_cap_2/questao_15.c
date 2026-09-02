#include <stdio.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, nota3, nota4, media_aritmetica, media_ponderada;

    printf("Digite as 4 notas do aluno: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media_aritmetica = (nota1+nota2+nota3+nota4)/4;
    media_ponderada = (1*nota1+1*nota2+2*nota3+2*nota4)/6;

    printf("A média aritmética: %.2f.\n", media_aritmetica);
    printf("A média ponderada: %.2f.\n", media_ponderada);

    system("PAUSE");
    return 0;
}