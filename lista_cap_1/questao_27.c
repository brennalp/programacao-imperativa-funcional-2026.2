#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int tempo, hora, minuto, segundo;

    printf("Digite um valor que será um intervalo de tempo em segundos: ");
    scanf("%d", &tempo);
    
    segundo = tempo%60;
    hora = (tempo/60)/60;
    minuto = (tempo/60)%60;

    printf("O intervalor de tempo %d em segundos representa %dh %dmin %dseg.", tempo, hora, minuto, segundo);

    system("PAUSE");

    return 0;
}