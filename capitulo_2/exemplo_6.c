#include <stdio.h>
#include <stdlib.h>

int main () {

    //funções getchar() e putchar() - sem esperar pela tecla enter no input
    //a função getchar só termina a leitura quando enter é pressionado

    char ch;
    printf("\nPressione uma tecla: ");
    ch = getchar(); //substitui o scanf - atribui o valor da função getche a variavel ch
    printf("\nA tecla sucessora ASCII é %c.\n"); //ch+1??
    putchar(ch+1);
    putchar('\n'); //o que é o putchar

    system("PAUSE");
    return 0;

}