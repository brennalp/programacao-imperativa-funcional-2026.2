#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float media = 0.0, nota;
    //const max = 10;
    //float soma = 0;

    for (int i = 1; i<=4; ++i){

        printf("Digite uma nota: ");
        scanf("%f", &nota);
        media+=nota;
        //soma+=nota;
    }

    printf("A média das notas é %.2f.\n", media/=4);//soma/max

    //a tabuada
    int num;

    while(num<0 && num>10){
        printf("Digite um número: ");
        scanf("%d", &num);
    }
    
    for(int i = 1; i<=num; i++){ //invertida: (int i = 10; i>0; i--)
        printf("%d x %d = %2d", num, i, num*i)
    }

    system("PAUSE");
    return 0;
}

/*forin e forish - desdobramentos do for em outras linguagens

for - laço de repetição mais generico que tem, maior controle sobre a repetição do codigo
dá pra fazer tudo com for se quiser - é mais completo
for (inicio; teste; incremento) { - pode ser mais de um codigo em cada bloco desse, o importante é entender o que se faz primeiro
} - se o teste for verdade, é que se executa o bloco 

inicializa - testa - bloco - incrementa - testa 
i++ ou ++i não tem diferença por não ta sendo atribuído a nenhuma variável

tem diferença de escopo da variável se ela é declarada no inicio ou no for - escopo global e local

while é mais simples - não sabe quantas vezes vai repetir um codigo

do while é uma derivação do while - garante que vai fazer pelo menos uma vez - usar nos jogos 
*/