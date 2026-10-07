#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    char letra, secreta;
    int tentativas;

    do
    {   
        secreta = rand() % 26 + 'a';
        tentativas = 0;

        printf("\nDigite uma letra (a-z): ");
        letra = getch();

        tentativas++;

        while (letra < secreta)
        {
            printf("A letra secreta vem depois de '%c' no alfabeto.\n", letra);
            break;
        }

        while (letra > secreta)
        {
            printf("A letra secreta vem antes de '%c' no alfabeto.\n", letra);
            break;
        }
    } while (letra != secreta);

    printf("\nParabens! Voce acertou a letra '%c'!\n", secreta);
    printf("Total de tentativas: %d\n", tentativas);

    system("PAUSE");
    return 0;
}