#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fibonacci(int n);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int quantidade;

    printf("Digite a quantidade de termos da sequência: ");
    scanf("%d", &quantidade);

    if(quantidade <= 0){
        printf("Quantidade inválida. Digite um valor positivo.\n");
    } else{
        printf("Sequência de Fibonacci:\n");

        for(int i = 0; i < quantidade; i++){
            printf("%ld ", fibonacci(i));
        }

        printf("\n");
    }

    system("PAUSE");
    return 0;
}

long fibonacci(int n){
    if(n == 0){
        return 0; // Primeiro caso base
    } else if(n == 1){
        return 1; // Segundo caso base
    } else{
        return fibonacci(n - 1) + fibonacci(n - 2); // Passo recursivo
    }
}

/*
A versão recursiva se torna lenta para valores grandes de n porque
realiza várias chamadas repetidas para calcular os mesmos termos.
Por exemplo, fibonacci(5) calcula fibonacci(3) mais de uma vez.
Essas chamadas aumentam rapidamente conforme n cresce.
*/