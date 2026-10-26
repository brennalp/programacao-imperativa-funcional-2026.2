#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

     int a, b, c, auxiliar;

    printf("Digite os 3 número em sequência: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        auxiliar = a;
        a = b;
        b = auxiliar;
    }

    if (a > c) {
        auxiliar = a;
        a = c;
        c = auxiliar;
    }

    if (b > c) {
        auxiliar = b;
        b = c;
        c = auxiliar;
    }

    printf("Ordem crescente: %d, %d, %d\n", a, b, c);

    system("PAUSE");
    return 0;
}