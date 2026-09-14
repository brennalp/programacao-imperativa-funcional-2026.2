#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    //qualquer uma das expressões do laço for pode conter várias instruções separadas por vírgulas - operador em C que significa faça isso e depois aquilo
    //um par de expressões separados por vírgula é avaliado da esquerda para direita
    //perguntar ao prof sobre valor de j
    for (int i=0, j=i; (i+j)<100; i++, j++){
        printf("%2d\t", i+j);
    }

    system("PAUSE");
    return 0;
}