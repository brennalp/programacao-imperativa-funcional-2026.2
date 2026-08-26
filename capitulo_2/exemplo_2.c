#include <stdio.h>
#include <stdlib.h>

int main() {

    //scanf com várias entradas
    float p1,p2,p3,p4;
    double media;

    printf("Digite as notas das 4 provas: ");
    scanf("%f%f%f%f", &p1,&p2,&p3,&p4);
    media = (p1+p2+p3+p4)/4;
    printf("A média das notas é %.2f.\n", media);
    system("PAUSE");

    return 0;

}