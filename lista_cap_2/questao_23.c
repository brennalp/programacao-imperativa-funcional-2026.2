#include <stdio.h>
#include <stdlib.h>

int main() {
    int hora, minuto, segundo, duracao_total;
    int tempo_total, hora_final, minuto_final, segundo_final;

    printf("Digite separadamente a hora, o minuto e o segundo de início do experimento: ");
    scanf("%d %d %d", &hora, &minuto, &segundo);

    printf("Digite a duração do experimento em segundos: ");
    scanf("%d", &duracao_total);

    tempo_total = duracao_total + (hora*3600) + (minuto*60) + segundo;
    segundo_final = tempo_total%60;
    minuto_final = (tempo_total/60)%60;
    hora_final = (tempo_total/60)/60;

    printf("O horário do término do experimento: %dh %dm %ds.\n", hora_final, minuto_final, segundo_final);


    system("PAUSE");
    return 0;
}