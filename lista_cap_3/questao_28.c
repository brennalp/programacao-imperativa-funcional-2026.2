#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int opcao;
    float salario, novoSalario, imposto;

    do
    {
        printf("\n===== FOLHA DE PAGAMENTO =====\n");
        printf("1 - Reajuste Salarial\n");
        printf("2 - Retencao de Imposto de Renda\n");
        printf("3 - Encerrar Programa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        while (opcao == 1)
        {
            printf("\nDigite o salario: R$ ");
            scanf("%f", &salario);

            novoSalario = salario;

            while (salario <= 2000)
            {
                novoSalario = salario * 1.15;
                break;
            }

            while (salario > 2000)
            {
                novoSalario = salario * 1.10;
                break;
            }

            printf("Novo salario: R$ %.2f\n", novoSalario);

            break;
        }

        while (opcao == 2)
        {
            printf("\nDigite o salario: R$ ");
            scanf("%f", &salario);

            imposto = salario;

            while (salario <= 3000)
            {
                imposto = salario * 0.08;
                break;
            }

            while (salario > 3000)
            {
                imposto = salario * 0.15;
                break;
            }

            printf("Valor do imposto de renda: R$ %.2f\n", imposto);
            break;
        }

        while (opcao != 1 && opcao != 2 && opcao != 3)
        {
            printf("\nOpcao invalida! Digite 1, 2 ou 3.\n");
            break;
        }

    } while (opcao != 3);

    printf("\nPrograma encerrado.\n");

    system("PAUSE");
    return 0;
}