#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int cont = 0;
   //laço while usa os mesmos elementos do laço for mas distribuídos pelo programa
   //usa o laço while quando este pode ser terminado inesperadamente por condições desenvolvidas no corpo do laço
    //não conhecemos de antemao o numero de iterações

   while(getche() != "\r"){//enquanto não der enter
    cont++;//conta quantos caracteres foram colocados
   }

   printf("O número de caracteres é %d", cont);

    system("PAUSE");
    return 0;
}

/* 
Comando while(teste) - se a expressão de teste for verdadeira o corpo do laço é executado uma vez e a expressão do teste é avaliada novamente
O ciclo de teste e execução é repetido até que a expressão de teste se torne falsa - o laço termina e o controle do prog passa para a linha seguinte

inicialização;
while(teste){
    incremento;
}

//do while - executar o corpo do laço uma vez, depois avaliar a expressão de teste e criar um ciclo repetido

   do {
    instrução;
   } while (teste);

   Primeiro, o bloco de código é executado, em seguida a expressão de teste entre parenteses é avaliada. Se verdade, o corpo do laço é executado
   mais uma vez e a expressão de teste é avaliada novamente. Esse ciclo de teste e execução é repetido até a expressão teste se torne falsa

   Razões para usar: legibilidade - ler a expressão de teste antes de percorrer o laço ajuda o leitor a interpretar facilmente o sentido do bloco
   e a possibilidade de executar pelo menos uma vez mesmo sendo falso 

*/
