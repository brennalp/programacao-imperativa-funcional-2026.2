#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {

    //funções getche() e getch() - sem esperar pela tecla enter no input
    //a função getch não imprime o caractere ao ser digitado

    char ch;
    printf("\nPressione uma tecla: ");
    ch = getche(); //substitui o scanf - atribui o valor da função getche a variavel ch
    printf("\nA tecla sucessora ASCII é %c.\n", ch+1); //ch+1??

    system("PAUSE");
    return 0;

}