#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int hora, minuto, segundo, tempo_total;

    printf("Informe o tempo total em segundos: ");
    scanf("%d", &tempo_total);

    segundo = tempo_total%60;
    minuto = (tempo_total/60)%60;
    hora = (tempo_total/60)/60;

    printf("O tempo total: %dh %dmin %dseg\n", hora, minuto, segundo);
    
    system("PAUSE");
    return 0;
}