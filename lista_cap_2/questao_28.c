#include <stdio.h>
#include <stdlib.h>

int main (){

    float sal_bruto, imposto;
    int hora_normal, hora_extra;
    const int TX_NORMAL = 10, TX_EXTRA = 15;
    const float TX_IMP = 0.10;

    printf("Digite a quantidade normais de horas trabalhadas: ");
    scanf("%d", hora_normal);

    printf("Digite a quantidade extra de horas trabalhadas: ");
    scanf("%d", hora_extra);

    sal_bruto = (hora_normal*TX_NORMAL) + (hora_extra*TX_EXTRA);

    imposto = (sal_bruto>12000) ? sal_bruto*TX_IMP : 0;

    printf("Valor do salário bruto: R$ %.2f.\nValor do imposto: R$ %.2f.zn", sal_bruto, imposto);

    system("PAUSE");
    return 0;
}