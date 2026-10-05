a) 6

b) x = 0; 0 < 5; x ++ = 1;
x = 1; 1 < 5 ; x ++ = 2;
x = 2; 2 < 5; x ++ = 3;
x = 3; 3 < 5; x ++ = 4;
x = 4; 4 < 5; x++ = 5;
x = 5; 5 < 5; x++ = 6 -> falso, sai do laço 

c) 

```c
#include <stdio.h>
#include <stdlib.h>

int main() {

    int x = 0;

    while (x < 5) {
       x++;
    }
    
    x++;

    printf("Valor final de x = %d\n", x);

    system("PAUSE");
    return 0;
```