#include <stdio.h>
#include <stdlib.h>

int main() 
{
    printf ( "Primeiro programa" );
    printf( "Primeiro programa" );
    printf("Primeiro programa");
    /*printf "Primeiro programa; -> única linha com erro sintático"*/

    system("PAUSE");
    
    return 0;
}

/*
Dentre as instruções, as 3 primeiras estão sintaticamente corretas e são executadas pelo compilador.
Isso demonstra que mesmo com espaços entre o printf e os parênteses, entre estes e as aspas, 
não gera problemas na compilação, o que implica em boa flexibilidade para escrita do código 
desde que as regras de sintaxe continuem a ser seguidas, que é ter os parênteses, as aspas e o ponto e vírgula.
Como no quarto comando faltam os parênteses, o programa daria erro na compilação.
*/