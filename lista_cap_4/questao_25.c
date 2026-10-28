#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){

    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    int total, cliente, troco, resto;
    int nota100 = 0, nota50 = 0, nota20 = 0, nota10 = 0, nota5 = 0, nota2 = 0;

    do {
        printf("Digite o valor a pagar: R$ \n");
        scanf("%d", &total);
    } while(total <= 0);

    do {
        printf("Digite o valor pago pelo cliente: R$ \n");
        scanf("%d", &cliente);
    } while(cliente <= 0);

    troco = cliente - total;

    if(troco < 0){
        printf("Erro: O valor fornecido pelo cliente não é suficiente\n");
    } else{

        resto = troco;

        //precisam ser vários if independentes para não ignorar o resto dos blocos quando uma condição for verdadeira
        if(resto >= 100){
            nota100 = resto / 100;
            resto %= 100;
        }

        if(resto >= 50){
            nota50 = resto / 50;
            resto %= 50;
        }

        if(resto >= 20){
            nota20 = resto / 20;
            resto %= 20;
        }

        if(resto >= 10){
            nota10 = resto / 10;
            resto %= 10;
        }

        //valores restantes entre 5 e 9
        if(resto >= 5){
            if(resto % 2 == 1){
                nota5 = 1;
                resto -= 5;
            } else{
                nota5 = 0;
            }
        }

        if(resto >= 2){
            nota2 = resto / 2;
            resto %= 2;
        }

        //o resto pode ser diferente de zero e não ser possível entregar todo o troco nas cédulas
        if(resto == 0){
            printf("O troco: R$ %d\n", troco);
            printf("Cédulas:\n");
            printf("R$ 100: %d\n", nota100);
            printf("R$ 50: %d\n", nota50);
            printf("R$ 20: %d\n", nota20);
            printf("R$ 10: %d\n", nota10);
            printf("R$ 5: %d\n", nota5);
            printf("R$ 2: %d\n", nota2);
        } else{
            printf("Não é possível fornecer o troco exato com essas cédulas.\n");
        }
    }

    system("PAUSE");
    return 0;
}