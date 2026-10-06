#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int a, b;

    printf("Digite os número A e B em sequência: ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) { //o teste do for ja pega se é maior ou menor e decide se o laço será feito ou não
        printf("%d\n", i);
    }

    for (int i = a; i >= b; i--) {
        printf("%d\n", i);
    }

    system("PAUSE");
    return 0;
}