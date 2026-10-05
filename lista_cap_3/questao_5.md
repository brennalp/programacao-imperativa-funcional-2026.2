a) 5 vezes

b) i = 0, i = 10, soma = 10;
i = 1, j = 9, soma = 10;
i = 2, j = 8, soma = 10;
i = 3, j = 7, soma = 10;
i = 4, j = 6, soma = 10;

i = 5 e j = 5 -> encerra 

c) 

```c
#include <stdio.h>
#include <stdlib.h>

//código com while
int main() {

    int i = 0, j = 10;

    while (i < j) {
        printf("i = %d, j =%d | soma = %d\n", i, j, i+j);
        i++;
        j--;
    }

    system("PAUSE");
    return 0;
```