#include <stdio.h>
#include <stdlib.h>

int main() {

    float comprimento, largura, preço_metro, perimetro, arame, custo_total;

    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimento);

    printf("Digite o largura do terreno: ");
    scanf("%f", &largura);

    printf("Digite o preço unitário do arame: ");
    scanf("%f", &preço_metro);

    perimetro = (2*comprimento) + (2*largura);
    arame = perimetro*3;
    custo_total = arame*preço_metro;

    printf("Total de metros de arame: %.2f.\nCusto total: %.2f.\n", arame, custo_total);

    system("PAUSE");
    return 0;
}