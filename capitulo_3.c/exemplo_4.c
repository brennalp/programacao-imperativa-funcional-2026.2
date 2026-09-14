#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    unsigned char ch;

   //é possível colocar funções nas expressões do for
   //também é possível omitir elas e os 3 ; devem permanecer
   //expressão de iniciar/incremento omitidas: são ignoradas
   //expressão teste omitida: considerada permamentemente verdadeira
    for (ch=getch(); ch!="X"; ch=getch()){
        printf("\n%c", ch+1);
    }

    //for(;;)
        //printf("Laço infinito")

    /*
    corpo do laço pode ser vazio mas o ponto e virgula deve permanecer

    for(i=0; i<10; ++i){
        ;
    }

    se um laço for executar várias instruções, elas precisam estar entre chaves - em C um bloco de código é uma série de instruções
    entre chaves e é tratado como um grupo de instruções numa única unidade. Um bloco de codigo é tratado como sendo uma única instrução
    uma variável declarada dentro de um bloco não é visível fora dele - escopo

    em todo lugar que é possível colocar uma instrução C, é também possível inserir um bloco de código - variáveis com mesmo nome podem existir em escopos diferentes
    */

    system("PAUSE");
    return 0;
}