#include <stdio.h>
#include <stdlib.h>

int main(){

    float raio, area, circunferencia;
    const float PI = 3.141593;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = PI*raio*raio;
    circunferencia = 2*PI*raio;

    printf("A área é: %.2f.\n", area);
    printf("A circunferência é: %.2f.\n", circunferencia);

    system("PAUSE");
    return 0;
}