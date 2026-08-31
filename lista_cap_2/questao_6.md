## Questão 06. Comportamento e Precedência dos Incrementos 

>O comportamento de incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros sutis na Linguagem C. Analise os dois trechos de código independentes abaixo e responda:

// Trecho A
int n = 5;
int x = ++n;
printf("Trecho A: n = %d, x = %d\n", n, x);
// Trecho B
int m = 5;
int y = m++;
printf("Trecho B: m = %d, y = %d\n", m, y);

a) Explique a diferença de fluxo e atribuição que ocorre entre o operador prefixado (++n) e o pós-fixado (m++). Quais serão os valores impressos na tela por cada trecho?
R.:Para o operador pré-fixado, primeiro a variável n será incrementada para depois ser atribuída á variável x. Então, a impressão do techo A será n=6 e x=6. Para operador pós-fixado, primeiro o valor da variável m é atribuído à variável y e depois é incrementado, o que gera a impressão do trecho m=6 e y=5.

b) Um programador júnior tentou imprimir uma variável em printf() modificando-a múltiplas vezes de forma sequencial na mesma chamada: printf("%d\t%d\t%d\n", n, n+1, n++);. Explique por que essa instrução pode gerar resultados inconsistentes e imprevisíveis dependendo do compilador adotado (comportamento indefinido).
R.: Essa forma de modificar sequencialmente pode gerar resultados inconsistentes pois a linguagem C não garante a ordem em que os argumentos da função são avaliados e o código tenta modificar e ler a variável ao mesmo tempo, o que faz com que compiladores diferentes produzam resultados diferentes e imprevisíveis