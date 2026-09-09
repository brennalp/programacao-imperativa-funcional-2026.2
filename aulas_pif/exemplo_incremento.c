#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //Exemplo 1: incremento e decremento com expressões
    int i = 3, n;
    n = i * (i+1) + (++i);
    printf("\n i = %d | n = %d\n\n", i, n);

    /*
    Devido a ordem de precendência das operações, o ++i atualizado não será colocado nos outros locais em que a variável aparece
    Primeiro, faz a expressão com i no valor anterior devido à multiplicação. Depois que se incrementa a variável.
    3 * (3+1) + (4) = 3*4 + 4 = 16
    n = 16; i = 4 (quando printar, a variável vai estar incrementada)

    Agora com a ordem de operações modificada - como a multiplicação está junto do incremento, 
    primeiro a variavel é incrementada e depois se segue com a expressão: 
    n = i + (i+1) * (++i)
    n = 4 + (4+1) * (4)
    n = 4 + 5*4 = 24
    */

    //Exemplo 2: incremento e decremento no printf
    int a = 5;
    printf("\n%d | %d | %d", --a, a+1, ++a);
    printf("\n%d\n", a);
    /*
    O printf atribui os valores aos especificadores da direita para a esquerda - segundo as IAs, em C não existe uma ordem em que o printf vai ser executado
    No primeiro caso (++a), a variável é incrementada, mas é printada com o valor original (?)
    No segundo caso (a+1), a variável já ta atualizada para 6 e ao ser somada 1, vira 7 e isso não incrementa a variavel
    No terceiro caso (--a), a variável possui valor 6 e será decrementada, retornando ao valor 5
    printf: 5, 7, 5
    */

    system("PAUSE");
    return 0;
}