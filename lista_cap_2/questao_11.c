#include <stdio.h>
#include <stdlib.h>

int main(){

    float graus, radianos;
    const float PI = 3.141593;

    printf("Digite o ângulo em graus: ");
    scanf("%f", &graus);

    radianos = graus*(PI/180.0);

    printf("O ângulo em radianos: %.2f rad.\n", radianos);

    system("PAUSE");
    return 0;
}