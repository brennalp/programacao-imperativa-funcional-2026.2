#include <stdio.h>
#include <stdlib.h>

int main () {

    int dia, mes, ano;
    printf("Digite uma data no formato dd/mm/aa: ");
    scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
    printf("A data que você digitou foi: %02d/%02d/%d.\n", ano, mes, dia);
    system("PAUSE");
    return 0;

}