#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int codigo;
    float salario, aumento;

    do{
        printf("Digite o valor do código (1 - Técnico, 2 - Gerente ou 3 - Demais Cargos): \n");
        scanf("%d", &codigo);
    }while(codigo<1 || codigo>3);

    do{
        printf("Digite o valor do salário: \n");
        scanf("%f", &salario);
    }while(salario<0);

    if(codigo == 1){
        if(salario<=3000){
            aumento = salario*0.15;
        } else{
            aumento = salario*0.10;
        }
    } else if(codigo == 2){
        if(salario<=5000){
            aumento = salario*0.10;
        } else{
            aumento = salario*0.05;
        }
    } else{
        aumento = salario*0.08;
    }

    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salário reajustado: R$ %.2f\n", salario+aumento);

    system("PAUSE");
    return 0;
}