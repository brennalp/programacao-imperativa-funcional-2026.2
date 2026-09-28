#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    const float PI = 3.14159265;
    float raio, area, volume;

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    area = 4*PI*pow(raio,2);
    volume = (4.0/3.0)*PI*pow(raio,3);

    printf("A área da esfera é: \t%4.3f.\n", area);
    printf("O volume da esfera é: \t%4.3f.\n", volume);
    
    system("PAUSE");
    return 0;
}