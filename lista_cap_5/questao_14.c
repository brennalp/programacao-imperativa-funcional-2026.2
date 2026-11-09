#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int somaDigitos(int n);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num, resultado;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    resultado = somaDigitos(num);

    printf("Soma dos dígitos: %d\n", resultado);

    system("PAUSE");
    return 0;
}

int somaDigitos(int n){
    if(n == 0){
        return 0; // Caso base
    } else{
        return (n % 10) + somaDigitos(n / 10); // Passo recursivo
    }
}