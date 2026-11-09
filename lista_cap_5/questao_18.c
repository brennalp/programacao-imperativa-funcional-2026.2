#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

long potencia(int base, int expoente);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int base, expoente;
    long resultado;

    printf("Digite a base: ");
    scanf("%d", &base);

    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    if(expoente < 0){
        printf("Expoente inválido. Digite um valor não negativo.\n");
    } else{
        resultado = potencia(base, expoente);
        printf("Resultado: %ld\n", resultado);
    }

    system("PAUSE");
    return 0;
}

long potencia(int base, int expoente){
    if(expoente == 0){
        return 1; // Caso base
    } else{
        return base * potencia(base, expoente - 1); // Passo recursivo
    }
}