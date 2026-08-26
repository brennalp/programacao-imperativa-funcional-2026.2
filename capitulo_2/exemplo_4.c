#include <stdio.h>
#include <stdlib.h>

int main () {

    //conversão automática: a menor vai para o tipo da maior e não dá o resultado correto
    //conversão explícita: usar operador de molde - escrever o nome do tipo desejado entre parênteses

    //sintaxe do operador molde: (tipo desejado)variavel ou (tipo desejado)(expressão)

    int VarInt = 20000000, Dez = 10;

    VarInt = ((double)VarInt * Dez)/Dez; //conversão pra double
    printf("\nVarInt = %d\n", VarInt); //não deveria ser o especificador de double?
    system("PAUSE");
    return 0;

}