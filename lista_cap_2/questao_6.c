#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    // Trecho A
    int n = 5;
    int x = ++n; //primeiro incrementa e depois atribui
    printf("Trecho A: n = %d, x = %d\n", n, x); // 6 e 6

    // Trecho B
    int m = 5;
    int y = m++; //primeiro atribui e depois incrementa
    printf("Trecho B: m = %d, y = %d\n", m, y); //6 e 5
    //y == 6 

    //Trecho C
    //A variável n tem valor original 5
    //n++: deveria atribuir primeiro e depois incrementar (5 -> 6)
    //n+1: soma 1 localmente no printf sem incrementar a variável (6+1)
    //n: printar o valor final de n pós o incremento (6)
    printf("%d\t%d\t%d\n", n, n+1, n++);
    //7, 8, 6 -> como saber a saída que vai retornar?

    system("PAUSE");
    return 0;
}