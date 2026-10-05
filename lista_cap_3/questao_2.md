a) O compilador emite um erro pois a variável soma foi declarada dentro do for, o que permite apenas que esta seja utilizada dentro do escopo do laço. Ou seja, quando ela é chamada fora pelo printf, não é possível realizar esse comando por estar fora do escopo da variável.

b) A variável soma = 0 estar dentro do bloco faz com que ela resete a cada iteração, o que não faz com que os valores anteriores se incrementem e mostrem a soma final.

c) A visibilidade da variável agora passa a ocorrer em qualquer parte do código, pois quando a variável é declara fora do bloco do for, ela pode ser chamada em qualquer parte do código. Em tempo de vida, é o período que a variável exist durante a execução e no código anterior, a cada iteração uma variável soma é criada e deixa de existir ao sair do código. Nele corrigido, a variável continua a existir mesmo quando acabam as iterações do for.

```c
#include <stdio.h>
#include <stdlib.h>

//código corrigido
int main() {

    int i, soma = 0;

    for (i = 1; i <= 10; i++) {
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```