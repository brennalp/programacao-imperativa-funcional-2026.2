#include <stdio.h>

int main () {

    printf("Hello World");

    return 0;
}

/*
Imperativo -> mais antigo 
Espelham a arquitetura de Von Neumann -> baseado em Turing 
Dados e programa ficassem na memoria do computador -> antes o programa ficava fora

Atribuição -> mudar dinamicamente valores de um local da memória e destruir seu valor anterior

Recursos da lingugagem imperativa 
Declaração de variaveis = atribuem nomes a locais da memória e associam tipos aos valores armazenados
Expressões = recuperação de valores de variáveis através de nomes (identificadores) a partir do lugar na memoria
Comandos condicionais = possibilidade de desviar o fluxo do programa, permitir que um conjunto de instruções não seja pulado
Comando de laço = desvia do fluxo para repetir

Núcleo da programação imperativa se resume a 3 conceitos:

1. Estado = conjunto de variáveis - cada variavel identifica um local na memoria
2. Reconhecedores de estados = expressões compostas por relações entre valores literais ou variáveis
3. Comandos de dois tipos
- atribuição: atualizam o conteúdo das variáveis (valores/expressões)
- controle: determinam próximo comando a ser executado (cond/laço)

Semelhanca com maquina fisica: cada estado quando reconhecido leva a uma sequencia de acoes que alteram seu estado
Isso acontece sucessivamente até o estado final que indica a conclusao da tarefa desejada

Linguagem deve ser completa quanto a turing -> capaz de expressar qualquer algoritmo

Proximidade com as maquinas -> maior eficiencia
Muito codigo escrito em linguagens imperativas e precisam ser mantidos

Tipagem estatica -> mais eficiente, maior legibilidade, maior disciplina por parte do programador
*/