#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    
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