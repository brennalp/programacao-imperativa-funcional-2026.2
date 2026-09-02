#include <stdio.h>
#include <stdlib.h>

int main(){

    int altura_degrau, altura_total, degrau;
    
    printf("Digite a altura de cada degrau em centímetros: ");
    scanf("%d", &altura_degrau);

    printf("Digite a altura total desejada em metros: ");
    scanf("%d", &altura_total);

    degrau = (altura_total*100)/altura_degrau;

    printf("A quantidade mínima de degraus é: %d.\n", degrau);

    system("PAUSE");
    return 0;
}