#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define SQR(x) ((x) * (x))
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

int main(){
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Quadrado do primeiro número: %d\n", SQR(num1));
    printf("Quadrado do segundo número: %d\n", SQR(num2));

    printf("Maior número: %d\n", MAX(num1, num2));
    printf("Menor número: %d\n", MIN(num1, num2));

    system("PAUSE");
    return 0;
}