#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    if(numero>=0){
        printf("A raiz: %.2f\n", sqrt(numero));
    } else {
        printf("O quadrado: %.2f\n", pow(numero,2));
    }
    system("PAUSE");
    return 0;
}