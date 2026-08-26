#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float dias, anos;
    printf("Digite sua idade em anos: ");
    scanf("%f", &anos);
    dias = 365*anos;
    printf("A sua idade em dias é %.0f.\n", dias);
    system("PAUSE");

    return 0;
}