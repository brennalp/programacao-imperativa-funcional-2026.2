#include <stdio.h>
#include <stdlib.h>

int main(){

    const float GRAT=0.05, IMP=0.07; //constantes de gratificação e imposto
    float sal_base, sal_bruto, sal_liquido;

    //o salário bruto é igual ao salário base aumentado com a gratificação
    //o salário líquido é a subtração do salário bruto pelo valor de imposto a ser pago
    printf("Digite o seu salário: ");
    scanf("%f", &sal_base);

    sal_bruto = (1+GRAT)*sal_base;
    sal_liquido = sal_bruto - IMP*sal_base; //o imposto é em cima do salário base

    printf("O salário líquido é: R$ %.2f.\n", sal_liquido);

    system("PAUSE");

    return 0;
}