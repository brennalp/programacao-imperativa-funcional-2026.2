#include <stdio.h>
#include <stdlib.h>

int main () {

    //incremento pré fixado e pós fixado

    int x, n, y, a, b, c;
    n = 5;
    x = ++n; //primeiro será incrementado para depois ser atribuído à variável x; saída x=6 e n=6
    y = n+x;
    printf("%d\n", y);

    b = 5;
    a = b++; //saída b = 6 e a = 5; primeiro o n é atribuído a x e depois é acrescido de 1
    //uso sozinho não faz diferença ser pre ou pos fixado
    c = a+b;
    printf("%d\n", c);
    printf("A = %d e B = %d", a, b);

    x --; 
    --x; //decrementos
    
    //operadores unários (incremento) tem precendencia sobre operadores binarios (aritmeticos)

    system("PAUSE");
    return 0;

}