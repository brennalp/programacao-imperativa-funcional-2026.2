#include <stdio.h>
#include <stdlib.h>

int main(){

    int dias, valor_bruto;
    float valor_liquido;
    const int TAXA = 30;
    const float IMPOSTO = 0.08;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dias);

    valor_bruto = TAXA*dias;
    valor_liquido = valor_bruto - (valor_bruto*IMPOSTO);

    printf("O valor bruto é: R$%d.\n", valor_bruto);
    printf("O valor líquido é: R$%.2f.\n", valor_liquido);

    system("PAUSE");
    return 0;
}