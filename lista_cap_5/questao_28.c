#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float calculaSubtotal(float preco, int quantidade);
float aplicaDesconto(float valor, int opcaoPagamento);
float calculaTroco(float total, float pago);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    float preco, subtotal, total, pago, troco;
    int quantidade, opcaoPagamento;

    printf("Digite o preço do produto: R$ ");
    scanf("%f", &preco);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    subtotal = calculaSubtotal(preco, quantidade);

    printf("\n===== FORMA DE PAGAMENTO =====\n");
    printf("1 - À vista\n");
    printf("2 - Outra forma de pagamento\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcaoPagamento);

    total = aplicaDesconto(subtotal, opcaoPagamento);

    printf("Digite o valor pago: R$ ");
    scanf("%f", &pago);

    printf("\n===== RESUMO DA COMPRA =====\n");
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Total a pagar: R$ %.2f\n", total);

    if(pago >= total){
        troco = calculaTroco(total, pago);
        printf("Troco: R$ %.2f\n", troco);
    } else{
        printf("Valor insuficiente. Faltam R$ %.2f\n", total - pago);
    }

    system("PAUSE");
    return 0;
}

float calculaSubtotal(float preco, int quantidade){
    return preco * quantidade;
}

float aplicaDesconto(float valor, int opcaoPagamento){
    if(opcaoPagamento == 1){
        return valor * 0.90;
    } else{
        return valor;
    }
}

float calculaTroco(float total, float pago){
    return pago - total;
}