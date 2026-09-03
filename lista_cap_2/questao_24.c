#include <stdio.h>
#include <stdlib.h>

int main(){

    float v_metros, v_km;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", v_km);

    v_metros = v_km/3.6;

    printf("O comprimento da velocidade convertida é %.2f m/s.\n", v_metros);

    system("PAUSE");
    return 0;
}