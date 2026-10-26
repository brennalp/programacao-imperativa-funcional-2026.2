#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int opcao;
    float temp;

    printf(".:: MENU :..\n");
    printf("1. Celsius para Fahrenheit\n");
    printf("2. Celsius para Kelvin\n");
    printf("3. Fahrenheit para Celsius\n");
    printf("4. Kelvin para Celsius\n");

    do{
        printf("Digite o número de uma opção: ");
        scanf("%d", &opcao);
    } while (opcao<1 || opcao>4);

    //não tem temperatura negativa em kelvin
    do {
        printf("Digite o valor da temperatura: ");
        scanf("%f", &temp);
    } while (opcao == 4 && temp < 0);


    switch(opcao){
        case 1:
            printf("1. Celsius para Fahrenheit: %.2f°C = %.2fF\n", temp, temp*1.8+32);
            break;
        case 2: 
            printf("2. Celsius para Kelvin: %.2f°C = %.2fK\n", temp, temp+273.15);
            break;
        case 3:
            printf("3. Fahrenheit para Celsius: %.2fF = %.2f°C\n", temp, (temp-32)/1.8);
            break;
        case 4:
            printf("4. Kelvin para Celsius: %.2fK = %.2f°C\n", temp, temp-273.15);
            break;
        default:
            printf("Erro: Opção inválida\n");
            break;
    }

    system("PAUSE");
    return 0;
}