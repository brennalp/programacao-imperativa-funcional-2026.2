#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define DOBRO(x) x*2

int dobro(int x);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int resultadoMacro, resultadoFuncao;

    resultadoMacro = DOBRO(2+3);
    resultadoFuncao = dobro(2+3);

    printf("Resultado da macro sem proteção: %d\n", resultadoMacro);
    printf("Resultado da função: %d\n", resultadoFuncao);

    /*A macro substitui o argumento diretamente no texto. DOBRO(2+3) vira 2+3*2, cujo resultado é 8. 
    A função recebe primeiro o resultado de 2+3, ou seja, 5. Por isso, a função retorna 10.*/

    #undef DOBRO
    #define DOBRO(x) ((x)*2)

    resultadoMacro = DOBRO(2+3);

    printf("\nResultado da macro corrigida: %d\n", resultadoMacro);

    system("PAUSE");
    return 0;
}

int dobro(int x){
    return x * 2;
}