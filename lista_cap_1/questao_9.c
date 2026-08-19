#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c",'\"');

    system("PAUSE");
    return 0;
}

/* 
A saída do programa é o print da frase Primeiro programa. 
Contudo, com os operadores de escape funcionando normalmente, devido ao especificador %c, que será explicado abaixo.
Então, na primeira linha, os especificadores são processados em ordem e realizam uma quebra de linha, um espaçamento tabular com o print da frase 
e abertura de uma aspas dupla.
E depois, na segunda linha, é fechada as aspas duplas.

Isso corre devido à interpretação dos caracteres passados para o especificador %c.
Quando uma sequência de escape está em uma aspas simmples, o compilador C a converte em um único caractere,
armazenado com um inteiro correspondente na tabela ASCII
Assim, o especificador indica ao printf que ele deve receber um valor número ASCII e emitir a ação de controle associada.
*/