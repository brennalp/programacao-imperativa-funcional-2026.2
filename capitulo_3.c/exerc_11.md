## Questao 11
> Verdadeiro ou Falso que produzem o mesmo resultado:
FALSO - tirar duvida

## Questao 12
> Qual o erro do programa?
A variável soma está sendo declarada dentro do laço for e isso torna o escopo dela local para ser utilizado apenas pelo laço.
Ou seja, quando se tenta dar printf na variável fora do laço, não é possível e dará erro.
Além disso, tem um erro de lógica pela variável ter sido declarada soma = 0  dentro do laço, a cada iteração ela será atualizada 
para zero e não irá acumular o valor dos quadrados.
Diferente de quando fizemos o while para obter várias médias, porque não queremos que acumule de forma errada

## Questao 13
> for (int a=36; a>0; a/=2), qual é a saída?
36, 18, 9, 4, 2, 1 (quando tiver divisão com resultado float, o que tem após a vírgula será truncado)

## Questao 14
>Transformar o programa para usar um for ao invés do while
O for se adapta melhor pois existe uma noção de quantas vezes é preciso executar esse código, além de que centraliza as 
expressões de inicialização, teste e incremento que ficam ao longo do código e poderiam estar em um único local, na expressão do for. 
Isso torna o código mais limpo e organizado.

```c
#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    printf("\n\nIIIIIII\n");

    for(i=0; i<17; i++){
        printf("   III\n");
    }
    printf("IIIIIII\n");
    printf("\n");
    system("PAUSE");
    return 0;
}
```
