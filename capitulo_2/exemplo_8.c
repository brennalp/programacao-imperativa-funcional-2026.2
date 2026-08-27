#include <stdio.h>

int main() {

    float tempC, tempF;

    printf("Informe a temperatura em ºF: ");
    scanf("%f", &tempF);

    tempC = (tempF-32.0)*5.0/9.0;

    printf("A temperatura %.2fºF em celsius: %.2fºC", tempF, tempC);

    return 0;
}