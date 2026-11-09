#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

//#define DEBUG

int somaAteN(int n);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    resultado = somaAteN(num);

    printf("Soma de 1 até %d: %d\n", num, resultado);

    system("PAUSE");
    return 0;
}

int somaAteN(int n){
    int soma = 0;

    for(int i = 1; i <= n; i++){
        soma += i;

        #ifdef DEBUG
            printf("Soma parcial na iteração %d: %d\n", i, soma);
        #endif
    }

    return soma;
}

/*
Com DEBUG definido:
O programa exibe o valor parcial da soma a cada iteração do laço,
permitindo acompanhar a execução da função.

Sem DEBUG definido:
As mensagens de depuração não são incluídas na compilação.
O programa exibe apenas o resultado final da soma.
*/