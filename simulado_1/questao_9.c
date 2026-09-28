#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    float a, b, c, p, area;

    printf("Informe o lado A do triângulo: ");
    scanf("%f", &a);

    printf("Informe o lado B do triângulo: ");
    scanf("%f", &b);

    printf("Informe o lado C do triângulo: ");
    scanf("%f", &c);
    
    p = (a+b+c)/2.0;
    area = sqrt(p*(p-a)*(p-b)*(p-c));

    printf("A área do triângulo é: %2.2f.\n", area);
    
    system("PAUSE");
    return 0;
}