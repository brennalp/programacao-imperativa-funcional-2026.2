#include <stdio.h>
#include <stdlib.h>

int main() {

    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("Decimal:%d Hexadecimal:%x Octal:%o ASCII:%c.\n", num, num, num, num);

    system("PAUSE");
    return 0;
}