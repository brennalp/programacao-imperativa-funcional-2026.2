#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define PI 3.14

float area(float r);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    float raio, resultado;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    resultado = area(raio);

    printf("Area da esfera: %.2f\n", resultado);

    system("PAUSE");
    return 0;
}

float area(float r){
    return 4 * PI * r * r;
}