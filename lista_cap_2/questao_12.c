#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, sucessor, antecessor;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    /*Os operadores unários pré-fixados primeiro se incrementam e depois são atribuídos à variável.
    Por isso, são os mais indicados para essa questão de forma que o incremento e o decremento ocorram.
    Assim, foi feita uma cópia da variável num para as variáveis antecessor e sucessor, sendo empregado os operadores unários pré-fixados nelas diretamente.
    */

    antecessor = num;
    --antecessor;

    sucessor = num;
    ++sucessor;

    printf("O antecessor de %d: %d.\n", num, antecessor);
    printf("O sucessor de %d: %d.\n", num, sucessor);

    system("PAUSE");
    return 0;
}

/*Anotações para estudo: 

Primeira versão do código:
antecessor = --num;
sucessor = ++num;
++sucessor;

Funciona, mas isso faz com que a variável seja alterada diretamente e torna a lógica mais complexa sem necessidade. O ideal é fazer a cópia
e depois incrementar/decrementar 
;*/