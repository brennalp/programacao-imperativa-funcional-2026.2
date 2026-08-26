#include <stdio.h>
#include <stdlib.h>

int main () {

    //incremento pré fixado e pós fixado

    int x, n;
    n = 5;
    x = ++n; //primeiro será incrementado para depois ser atribuído à variável x; saída x=6 e n=6

    n = 5;
    x = n++; //saída n = 6 e x = 5; primeiro o n é atribuído a x e depois é acrescido de 1
    //uso sozinho não faz diferença ser pre ou pos fixado

    x --; 
    --x; //decrementos
    
    //operadores unários (incremento) tem precendencia sobre operadores binarios (aritmeticos)

    system("PAUSE");
    return 0;

}