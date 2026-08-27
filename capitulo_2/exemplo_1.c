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

/*
se um float for atribuído a um int, a parte decimal vai ser cortada
fortemente tipado - local de memoria com qtd de bytes previamente definida
mais lixo de memoria em ling fortemente tipadas - garbage colector em java 
mais problemas em ling fracamente tipada - padrões de projeto que dependem de tipo (gambiarra pra se adaptar)
*/