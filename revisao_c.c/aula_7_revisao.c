#include <stdio.h>

int main () {

    //apenas comparações de igualdade no switch case

    int opcao; 

    printf("Digite de 1 a 5: \n");
    scanf("%d", &opcao);

    switch (opcao){

        case 1:
            printf("Número um.\n");
            break;

        case 2:
            printf("Numero 2.\n");
            break;

        case 3:
            printf("Numero 3.\n");
            break;

        case 4:
            printf("Numero 4.\n");
            break;

        case 5:
            printf("Numero 5.\n");
            break;

        default:
            printf("Valor inválido.\n");
            break;

    }
}