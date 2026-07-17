#include <stdio.h>

int main() {

    int nota1, nota2;
    float media;

    printf("Nota 1:\n");
    scanf("%d", &nota1);

    printf("Nota 2:\n");
    scanf("%d", &nota2);

    media = (nota1+nota2)/2;

    printf("Média: %2f", media);

    if(media>=7){
        printf("Aluno aprovado\n");
    } else {
        printf("Aluno reprovado\n");
    }
}