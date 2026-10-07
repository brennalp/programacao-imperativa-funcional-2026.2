#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
     float nota, soma = 0.0, media;
     int aluno = 0, menor = 0, maior = 10;

    do {
        printf("\nDigite uma nota de 0 a 10: ");
        scanf("%f", &nota);

        (nota<0 || nota>10) ? printf("\nDigite uma nota válida.") : 0;

        while(nota>=0 || nota<=10){
            soma+=nota;
            aluno++;

            while (nota > maior) {
                maior = nota;
                break;
            }

            while (nota < menor) {
                menor = nota;
                break;
            }
            break;
        }

    } while(nota != -1);

    media = soma/aluno;
    printf("A quantidade de alunos: %d\nA média geral da turma: %.2f\n", aluno, media);
    printf("Maior nota da turma: %.2f\nMenor nota da turma: %.2f", maior, menor);

    system("PAUSE");
    return 0;
}