#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float k, f;

    for (int c = 0; c <= 100; c+=5) {
        f = (9/5)*c+32;
        k = c+273.15;
        printf("Temperatura em Celsius: %d °C \tFarenheit: %.2f F \tKelvin: %.2f K\n", c, f, k);
    }

    system("PAUSE");
    return 0;
}