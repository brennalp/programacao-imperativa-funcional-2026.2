#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    float lado_a, lado_b, hipotenusa;

    printf("Digite o valor do cateto A: ");
    scanf("%f", &lado_a);

    printf("Digite o valor do cateto B: ");
    scanf("%f", &lado_b);

    hipotenusa = sqrt(pow(lado_a, 2)+pow(lado_b,2));

    printf("O comprimento da hipotenusa é %.2f", hipotenusa);

    system("PAUSE");
    return 0;
}