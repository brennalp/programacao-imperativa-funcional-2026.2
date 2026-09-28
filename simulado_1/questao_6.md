a) O compilador emite um erro pois a variável soma foi declarada dentro do for, o que permite apenas que esta seja utilizada dentro do escopo do laço. Ou seja, quando ela é chamada fora pelo printf, não é possível realizar esse comando por estar fora do escopo da variável.

b) As iterações que serão feitas são: 1,2,3,4,6,7. O comando continue faz com que o laço pule o valor 5 e continue as interações, enquanto o break faz com o laço se interrompa ao chegar no 8.

c) i = 1, soma = 0 + 1*1 = 1;
i = 2, soma = 1 + (2*2) = 1 + 4 = 5;
i = 3, soma = 5 + (3*3) = 5 + 9 = 14;
1 = 4, soma = 14 + (4*4) = 14 + 16 = 30;
i = 6, soma = 30 + (6*6) = 30 + 36 = 66;
i = 7, soma = 66 + (7*7) = 66 + 49 = 115;
Soma final = 115.

```c
#include <stdio.h>
#include <stdlib.h>
int main() {

    int i, soma = 0;
    
    for (i = 1; i <= 10; i++) {
        if (i == 5) continue;
        if (i == 8) break;
        soma += i * i;
    }

    printf("Soma final = %d\n", soma);

    system("PAUSE");
    return 0;
}
```