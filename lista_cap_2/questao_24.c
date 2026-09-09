#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float v_metros, v_km;

    printf("Digite a velocidade em km/h: ");
    scanf("%f", &v_km);

    v_metros = v_km/3.6;

    printf("O comprimento da velocidade convertida é %.2f m/s.\n", v_metros);

    system("PAUSE");
    return 0;
}