#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float km, litro, consumo;

    do{
        printf("Digite a quilometragem e a quantidade de litros: ");
        scanf("%f %f", &km, &litro);
    } while (km<=0 || litro<=0);

    consumo = km/litro;

    if(consumo<8.0){
        printf("Venda o carro!\n");
    } else if(consumo<=14.0){
        printf("Econômico!\n");
    } else{
        printf("Super econômico\n");
    }


    system("PAUSE");
    return 0;
}