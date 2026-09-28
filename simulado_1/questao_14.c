#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int tentativa = 1, senha = 2026, usuario = 0;

    while(tentativa<=3 && usuario!=senha){
        printf("Digite a senha numérica: ");
        scanf("%d", &usuario);
        tentativa++;
    }

    (usuario == senha) ? printf("Acesso concedido!.\n") : printf("Conta bloqueada por segurança!.\n");
    

    system("PAUSE");
    return 0;
}