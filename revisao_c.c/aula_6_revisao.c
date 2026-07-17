#include <stdio.h>

int main () {

    /* && || !*/

    float media, freq;

    printf("Digite a media: \n");
    scanf("%f", &media);

    printf("Digite a frequencia: \n");
    scanf("%f", &freq);

    if (media>=7 && freq>=75) {

        printf("Aluno aprovado");

    } else if (media<7 && freq >=75){
        
        printf("Aluno em recuperação");

    } else if (media<7 || freq<75) {

        printf("Aluno reprovado");
    } 
}