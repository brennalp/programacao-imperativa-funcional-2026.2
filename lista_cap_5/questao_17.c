#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long fatorialIterativo(int n);
long fatorialRecursivo(int n);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num;
    long resultado1, resultado2;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &num);

    if(num < 0){
        printf("Valor inválido. Digite um número não negativo.\n");
    } else{
        resultado1 = fatorialIterativo(num);
        resultado2 = fatorialRecursivo(num);

        printf("Fatorial iterativo: %ld\n", resultado1);
        printf("Fatorial recursivo: %ld\n", resultado2);

        if(resultado1 == resultado2){
            printf("Os resultados coincidem.\n");
        } else{
            printf("Os resultados são diferentes.\n");
        }
    }

    system("PAUSE");
    return 0;
}

long fatorialIterativo(int n){
    long fat = 1;

    for(int i = 1; i <= n; i++){
        fat *= i;
    }

    return fat;
}

long fatorialRecursivo(int n){
    if(n == 0){
        return 1;
    } else{
        return n * fatorialRecursivo(n - 1);
    }
}