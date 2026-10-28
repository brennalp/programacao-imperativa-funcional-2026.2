#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int horas;
    float valor;

    do{
        printf("Digite o tempo de permanência em horas: \n");
        scanf("%d", &horas);
    }while(horas<=0);

    if(horas<=2){
        valor = horas*2.0;
    } else if(horas<=4){
        valor = 4.0+(horas-2)*2.5;
    } else{
        valor = 9.0+(horas-4)*3.0;
    }

    printf("Tempo total: %d horas\n", horas);
    printf("Valor final: R$ %.2f\n", valor);

    system("PAUSE");
    return 0;
}