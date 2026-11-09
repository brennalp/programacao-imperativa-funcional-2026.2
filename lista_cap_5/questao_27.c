#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

float celsiusParaFahrenheit(float temp);
float celsiusParaKelvin(float temp);
float fahrenheitParaCelsius(float temp);
float kelvinParaCelsius(float temp);

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int opcao;
    float temperatura, resultado;

    printf("===== CONVERSOR DE TEMPERATURAS =====\n");
    printf("1 - Celsius para Fahrenheit\n");
    printf("2 - Celsius para Kelvin\n");
    printf("3 - Fahrenheit para Celsius\n");
    printf("4 - Kelvin para Celsius\n");

    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    if(opcao < 1 || opcao > 4){
        printf("Opção inválida.\n");
    } else{
        printf("Digite a temperatura: ");
        scanf("%f", &temperatura);

        switch(opcao){
            case 1:
                resultado = celsiusParaFahrenheit(temperatura);
                printf("Temperatura em Fahrenheit: %.2f\n", resultado);
                break;

            case 2:
                resultado = celsiusParaKelvin(temperatura);
                printf("Temperatura em Kelvin: %.2f\n", resultado);
                break;

            case 3:
                resultado = fahrenheitParaCelsius(temperatura);
                printf("Temperatura em Celsius: %.2f\n", resultado);
                break;

            case 4:
                resultado = kelvinParaCelsius(temperatura);
                printf("Temperatura em Celsius: %.2f\n", resultado);
                break;
        }
    }

    system("PAUSE");
    return 0;
}

float celsiusParaFahrenheit(float temp){
    return (temp * 9.0 / 5.0) + 32;
}

float celsiusParaKelvin(float temp){
    return temp + 273.15;
}

float fahrenheitParaCelsius(float temp){
    return (temp - 32) * 5.0 / 9.0;
}

float kelvinParaCelsius(float temp){
    return temp - 273.15;
}