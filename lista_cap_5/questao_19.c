#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void contagem(int n);
void contagemCrescente(int n);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num;

    printf("Digite um número positivo: ");
    scanf("%d", &num);

    if(num <= 0){
        printf("Valor inválido. Digite um número positivo.\n");
    } else{
        printf("Contagem regressiva:\n");
        contagem(num);

        printf("\nContagem crescente:\n");
        contagemCrescente(num);
    }

    system("PAUSE");
    return 0;
}

void contagem(int n){
    if(n == 0){
        printf("Fogo!\n");
    } else{
        printf("%d\n", n);
        contagem(n - 1);
    }
}

void contagemCrescente(int n){
    if(n == 0){
        return;
    } else{
        contagemCrescente(n - 1); // Chamada recursiva antes do printf
        printf("%d\n", n);
    }
}