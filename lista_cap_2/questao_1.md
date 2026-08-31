## Questão 01. Truncamento de Tipos e Coerção Implícita 

>Um estudante do curso de ADS escreveu o programa em C abaixo visando entender o comportamento de variáveis e atribuições de tipos incompatíveis. Analise o código, compile mentalmente ou em seu ambiente de desenvolvimento e responda às questões indicadas.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int valor_inteiro;
    valor_inteiro = 2.97;
    printf("O valor armazenado eh: %d\n", valor_inteiro);
    system("PAUSE");
    return 0;
}
```

a) Qual é o valor numérico que será efetivamente exibido no console ao executar esse
programa?
R.: O valor numérico será 2

b) Explique por que isso ocorre. Qual é o nome do fenômeno que acontece nessa atribuição?
R.: Isso ocorre porque o tipo da variável declarada é inteiro, mas foi atribuída a ela um valor float. Por isso, houve o truncamento do valor, ou seja, apenas a parte inteira fica contida na variável, aparecendo no printf, e o resto é descartado. Esse fenômeno é chamado de conversão implícita. 

c) Como este tipo de comportamento pode ser evitado ou controlado explicitamente em C pelo programador caso ele necessite arredondar o valor ou manter a precisão?
R.: Esse tipo de comportamento pode ser evitado se atentando ao tipo declarado na variável, garantindo que seja realmente aquele se deseja. Além disso, é possível fazer a conversão explícita no código com a sintaxe (tipo da variável) para obter o tipo desejado.