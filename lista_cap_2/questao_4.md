## Questão 04. Operadores de Atribuição Composta e Precedência 

>Os operadores de atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus cálculos apresentando a ordem de avaliação passo a passo:

R.: Considerando que a ordem de atribuição das variáveis sempre ocorre da direita para esquerda, além da ordem de precedência entre os operadores, temos que:

int a = 1, b = 2, c = 3, d = 4;

* a += b + c; // Valor final de a = após a soma de b e c (2+3=5), o valor 5 é somado ao valor 1 de a por ter um aritmético de atribuição com soma. O valor final de a=6.

* b *= c = d + 2; // Valores finais de b e c = a variável c vai receber a soma d+2 que resulta em 6; a variável terá seu valor multiplicado por esse resultado por ter um artimético de atribuição com vezes, sendo 2 * 6 igual a 12. Então, valor de c=6 e valor de b=12.

* d %= a + a + a; // Valor final de d = o valor de a será somado 3 vezes, sendo 1 + 1 + 1, o que resulta no valor 3. O aritmético de atribuição de resto de divisão fará a operação 4%3 e atribuirá à variável d, que terá valor igual a 1. Então, d=1.

* d -= c -= b -= a; // Valor final de d, c e b = Como esta é uma sequência de aritméticos de atribuição, o valor de b será b-a, o que implica em 2-1 e b=1; o valor de c será c-b, o que implica em 3-1 e c=2; e o valor de d será d-c, o que implica em 4-2 e d=2.

* a += b += c += 7; // Valor final de a, b e c = Como esta é uma sequência de aritméticos de atribuição, o valor de c será c+7, o que implica em 3+7 e c=10; o valor de b será b+c, o que implica em 2+10 e b=12; e o valor de a será a+b, o que implica em 12+1 e a=13.
