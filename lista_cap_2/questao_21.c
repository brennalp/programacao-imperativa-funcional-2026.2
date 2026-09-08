#include <stdio.h>
#include <stdlib.h>

int main(){

    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    /*Na linguagem C, o tipo char é armazenado na memória como um inteiro de 1 byte em binário e
    quando se imprime a variável com o especificador %d, é exibido o valor numérico decimal correspondente.
    
    O número inteiro impresso representa o código decimal do caractere na Tabela ASCII
    */
    printf("Caractere em formato inteiro: %d.\n", caractere);

    system("PAUSE");
    return 0;
}