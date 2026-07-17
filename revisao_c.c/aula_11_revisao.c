#include <stdio.h>

int main() {

    //char é um vetor

    // tipo nome[tamanho];

    //lista de inicialização é quando você pode ver o vetor inteiro

    //é possível extrapolar as memorias reservadas pro vetor

    int v[5] = {4,5,6,6,7};

    int i;

    float s = 0;

    int z[4];

    int tamanho_v = sizeof(v)/sizeof(v[0]);

    int tamanho_z = sizeof(z)/sizeof(z[0]);

    for (i=0; i<tamanho_v; i++) {
        s+=v[i];
    }

    printf("O resultado é %f", s/5);

    for(i=0; i<4; i++){
        printf("Digite um dado: \n");
        scanf("%d ", &v[i]);
    }


    printf("Dados inseridos.\n");

    for(i=0; i<tamanho_z; i++){
        printf("Os dados: %d\n", v[i]);
    }

    //alterando o vetor

    v[1] = 4;

    //se for declarado parcialmente, vai encher as outras posições com 0



}