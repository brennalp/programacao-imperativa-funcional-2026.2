#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    const int valor_dia = 45;
    const float gratificacao = 0.05, imposto = 0.08;
    int dia;
    float salario_bruto, salario_liquido;

    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%d", &dia);

    salario_bruto = valor_dia*dia;
    salario_liquido = (salario_bruto*(1+gratificacao)) - salario_bruto*imposto;

    printf("Tabela de operações de salário: ");
    printf("\nSalário bruto:\t%4.2f", salario_bruto);
    printf("\nValor com a gratificação:\t%4.2f", salario_bruto*(1+gratificacao));
    printf("\nValor do imposto:\t%4.2f", salario_bruto*imposto);
    printf("\nSalário líquido:\t%4.2f\n", salario_liquido);
    

    system("PAUSE");
    return 0;
}