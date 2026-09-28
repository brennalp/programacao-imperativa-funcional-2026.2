#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

   //a variável do laço pode ser do tipo char
    for (char ch = "a"; ch <= "z"; ch++){
        printf("\nO valor de %c na Tabela ASCII é %d", ch, ch);
    }

    system("PAUSE");
    return 0;
}