#include <stdio.h>
#include <stdlib.h>

int main (){
    float celsius, fahrenheit, kelvin;

    printf("Digite a temperatua em celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius*9.0/5.0) + 32;
    kelvin = celsius+273;

    printf("A temperatura em Fahrenheit: %.2f°F.\n", fahrenheit);
    printf("A temperatura em Kelvin: %.2f K.\n", kelvin);

    system("PAUSE");
    return 0;
}