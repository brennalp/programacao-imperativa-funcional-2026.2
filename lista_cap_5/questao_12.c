#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void exibeMenu(void);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int opcao;

    exibeMenu();

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Opção Cadastrar selecionada.\n");
            break;
        case 2:
            printf("Opção Listar selecionada.\n");
            break;
        case 3:
            printf("Opção Remover selecionada.\n");
            break;
        case 0:
            printf("Saindo do programa.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    system("PAUSE");
    return 0;
}

void exibeMenu(void){
    printf("===== MENU =====\n");
    printf("1 - Cadastrar\n");
    printf("2 - Listar\n");
    printf("3 - Remover\n");
    printf("0 - Sair\n");
}