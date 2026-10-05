#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 0; i <= 100; i++) {
       printf("%d", i);
    }

    system("PAUSE");
    return 0;
}

int main() {
    int i = 0;

    while (i <= 100) {
       printf("%d", i);
       i++;
    }

    system("PAUSE");
    return 0;
}

int main() {
    int i = 0;

    do {
       printf("%d", i);
       i++;
    } while (i <= 100);

    system("PAUSE");
    return 0;
}

/*A melhor estrutura para esse caso é o for por sabermos quantas vezes o laço irá se repetir, além dos valores iniciais e finais.*/