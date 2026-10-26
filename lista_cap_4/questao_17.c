#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float total, desconto, parcelado;
    int opcao;

    do{
        printf("Digite o total de vendas: \n");
        scanf("%f", &total);
    } while (total<=0);

    printf(".:: MENU :..\n");
    printf("1. À Vista com 10%% de desconto\n");
    printf("2. Parcelado 3x sem juros\n");

    do {
        printf("Digite o número da opção: \n");
        scanf("%d", &opcao);
    } while(opcao<0 || opcao>3);

    desconto = total*0.9;
    parcelado = total/3.0;

    if(opcao == 1){
        printf("Valor com desconto à vista: %.2f\n", desconto);
        printf("A comissão do vendedor é: %.2f\n", desconto*0.05);
    } else if (opcao == 2){
        printf("Valor da parcela: %.2f\n", parcelado);
        printf("A comissão do vendedor é: %.2f\n", total*0.05);
    }

    system("PAUSE");
    return 0;
}