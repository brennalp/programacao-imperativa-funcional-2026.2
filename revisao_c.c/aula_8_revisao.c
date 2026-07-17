#include <stdio.h>

int main () {

    int num = 0, soma = 0, cont = 0, i=1;

    printf("Digite um número: ");
    scanf("%d", &num);

    while(cont<=num){
        soma+=cont;
        cont++;
    }

    printf("A soma do numero %d eh %d", num, soma);

    while(i<=10){
        printf("%d", i);
        i++;
    }
}