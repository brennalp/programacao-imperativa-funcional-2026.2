#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float raio, area, volume;
    const float PI = 3.141593;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    area = 4*PI*raio*raio;
    volume = (4.0/3.0)*PI*raio*raio*raio;

    printf("A área é: %.2f.\n", area);
    printf("O volume é: %.2f.\n", volume);

    system("PAUSE");
    return 0;
}