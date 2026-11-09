#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsius(float fahr);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    float fahrenheit, resultado;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    resultado = celsius(fahrenheit);

    printf("Temperatura em Celsius: %.2f\n", resultado);

    system("PAUSE");
    return 0;
}

float celsius(float fahr){
    return (fahr - 32) * 5.0 / 9.0;
}
