#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int idade, tempo;

    do {
        printf("Informe sua idade e tempo de contribuição respectivamente: ");
        scanf("%d %d", &idade, &tempo);
    } while (idade<0 || tempo<0);

    if(idade>=65 || tempo>=30 || (idade>=60 && tempo>=25)){
        printf("Você pode se aposentar\n");
    } else {
        printf("Você não pode se aposentar\n");
    }
    system("PAUSE");
    return 0;
}