#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float valor = 0.0, soma = 0.0, media;
    int repeticao = 0;

    while(valor>=0) {
        printf("\nDigite valor positivo: ");
        scanf("%f", &valor);

        (valor>=0) ? (soma += valor) && (++repeticao) : 0;
    }

    media = soma/repeticao;

    printf("Quantidade de valores digitados: %d, soma total: %.2f e média: %.2f.\n", repeticao, soma, media);

    system("PAUSE");
    return 0;
}