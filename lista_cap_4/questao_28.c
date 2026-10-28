#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    
    int opcao, atende;
    float valor;

    printf("..::MENU::..");
    printf("\nDigite a opção: ");
    printf("\n1 - Consultar Saldo");
    printf("\n2 - Efetuar Extrato");
    printf("\n3 - Fazer Transferência");
    printf("\n4 - Falar com Atendente\n");
    scanf("\n%d", &opcao);

    switch(opcao){
        case 1:
            printf("O seu saldo é: R$ 500,00");
            break;
        case 2:
            printf("Extrato:\nMercado: R$ 890,00\nGasolina: R$ 460,00\nÁgua: R$ 12,00\n");
            break;
        case 3:
            printf("\nQual valor deseja transferir? ");
            scanf("%f", &valor);
            printf("\nTransferência realizada!");
            break;
        case 4:
            printf("\nDeseja falar com atende humano ou chat de IA:\n1 - Atendente humano\n2 - Atendente com IA\n");
            scanf("%d", &atende);
            break;
        default:
            printf("\nErro: Opção inválida.");
    }

    system("PAUSE");
    return 0;
}