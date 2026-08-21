#include <stdio.h>
#include <stdlib.h>

int main() {

    // carro
    printf("   \xDB\xDB\xDB\xDB\n"); //teto
    printf("\xDF\xDB\xDB\xDB\xDB\xDB\xDB\xDF\xDF\n"); //carcaça do carro
    printf("  O     O\n\n"); // pneus

    //caminhonete
    printf("  \xDB \xDB\xDB\xDB\xDB\n"); //cabine e caçamba
    printf(" \xDF\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n"); //frente e lateral
    printf("  O    OO\n"); // pneu da frente e pneu duplo traseiro

    system("PAUSE");

    return 0;
}