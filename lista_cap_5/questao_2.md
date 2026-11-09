Questão 02

a) Uma função em C pode retornar apenas um valor por meio do comando `return`.

Na função `calcular()`, o programador pretendia retornar dois valores: a soma e a média dos três números. Porém, `return soma, media;` não retorna os dois valores. O operador vírgula avalia as expressões e retorna apenas o último valor, nesse caso, `media`.

b) O comando `return;` encerra a execução da função `void` imediatamente. Nesse exemplo, quando `erro` é menor que zero, a mensagem de erro é exibida e a função termina, sem executar o próximo `printf`.

Ele não é obrigatório no final de uma função `void`, pois ela pode terminar naturalmente ao chegar ao fim do seu bloco de código.

c) As funções podem ser reescritas da seguinte forma:

```
float calcular(int a, int b, int c) {
    int soma = a + b + c;
    float media = soma / 3.0;
    return media;
}

int calcular_soma(int a, int b, int c) {
    int soma = a + b + c;
    return soma;
}
```

É necessário criar duas funções porque o comando `return` retorna apenas um valor por chamada. Assim, cada função fica responsável por calcular e retornar um resultado diferente: uma retorna a média e a outra retorna a soma.