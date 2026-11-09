Questão 04

a) O caso base é `n == 0`, que retorna o valor `1` e encerra a sequência de chamadas recursivas.

O passo recursivo é `n * fatorial(n - 1)`, em que a função chama a si mesma com um valor menor de `n`.

Se o caso base fosse removido, a função continuaria chamando a si mesma sem parar, até ocorrer um erro por falta de espaço na pilha de execução.

b) Na chamada `fatorial(4)`, primeiro acontece o empilhamento das chamadas:

```
fatorial(4) = 4 * fatorial(3)
fatorial(3) = 3 * fatorial(2)
fatorial(2) = 2 * fatorial(1)
fatorial(1) = 1 * fatorial(0)
fatorial(0) = 1
```

Depois que o caso base é alcançado, começa o desempilhamento, com o retorno dos resultados:

```
fatorial(0) retorna 1
fatorial(1) retorna 1 * 1 = 1
fatorial(2) retorna 2 * 1 = 2
fatorial(3) retorna 3 * 2 = 6
fatorial(4) retorna 4 * 6 = 24
```

Portanto, `fatorial(4)` retorna 24.

c) A cada chamada recursiva, uma nova chamada da função é armazenada na pilha de execução, mantendo suas informações, como os parâmetros e as variáveis locais.

Quando o caso base é encontrado, as chamadas começam a ser finalizadas na ordem inversa em que foram realizadas, ou seja, a última chamada é a primeira a retornar.

Sem um caso base, as chamadas continuam sendo empilhadas até que a memória disponível para a pilha se esgote, causando uma falha no programa.