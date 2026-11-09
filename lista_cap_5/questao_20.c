#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int ehPrimo(int n);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(ehPrimo(num) == 1){
        printf("O número %d é primo.\n", num);
    } else{
        printf("O número %d não é primo.\n", num);
    }

    printf("\nNúmeros primos de 1 até 50:\n");

    for(int i = 1; i <= 50; i++){
        if(ehPrimo(i) == 1){
            printf("%d ", i);
        }
    }

    printf("\n");

    system("PAUSE");
    return 0;
}

int ehPrimo(int n){
    if(n < 2){
        return 0;
    }

    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return 0;
        }
    }

    return 1;
}