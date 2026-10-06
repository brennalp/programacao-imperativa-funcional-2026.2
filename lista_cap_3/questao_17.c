#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
     float nota, soma, media;
     int aluno = 0;

    do {
        printf("\nDigite uma nota de 0 a 10: ");
        scanf("%f", &nota);

        (nota<0 || nota>10) ? printf("\nDigite uma nota válida.") : 0;

        while(nota<0 || nota>10){
            soma+=nota;
            aluno++;
        }

    } while(nota != -1);

    media = soma/aluno;
    printf("A quantidade de alunos: %d\nA média geral da turma: %.2f\n", aluno, media);

    system("PAUSE");
    return 0;
}