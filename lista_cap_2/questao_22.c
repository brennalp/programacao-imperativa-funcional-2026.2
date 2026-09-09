#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    char caractere, minuscula;

    printf("Digite um caractere maiúsculo: ");
    scanf("%c", &caractere);

    /*Na Tabela ASCII, as letras do alfabeto em maísculo vão dos números inteiros 65 a 90, e os mesmos caracteres em maiúsculo de 97 a 122.
    Isso significa que o mesmo caractere em minísculo e maiúsculo estão separados por um intervalo de 32 números. 
    Então, para conseguir o caractere em minúsculo, é preciso somar 32 ao caractere digitado em maiúsculo.
    */
    minuscula = caractere+32;
    printf("Caractere em minúsculo: %c.\n", minuscula);

    system("PAUSE");
    return 0;
}