/*o tipo dela, o nome, parenteses (define que isso é uma função), abre chave e fecha chave
conjunto de instruções desenhadas para cumprir uma tarefa particular e agrupadas numa unidade com um nome para referenciá-la 
conjunto de codigo que é executado toda vez que é chamada a função
printf, scanf, system - funções pré estabelecidas em bibliotecas 

3 formas de fazer funções (criar direto em no inicio, fazer prototipo, fazer o arquivo .h
o retorno define o tipo da função - ja saber qual é o tipo

se n retorna nada, coloca um void

quando precisa mudar, é so em um lugar -> reutilização de código 

biblioteca em C - arquivo .h 
#include "tempC.h"
*/

float celsiusParaF(float celsius){ // estrutura obrigatória, parametro - aquilo q ela recebe
    return celsius*9.0/5.0+32;  //variavel local que so existe dentro da função 
}

//isso dentro da int main
tempF = celsiusParaF(tempC);

//codigo main é o principal - ficaria no final: por isso que usa os prototipos 

float celsiusParaF(float tempC); //vai entender que a função existe e que ela vai ta em algum canto 

int main(){
    return 0;
}

float celsiusParaF(float celsius){
    return celsius*9.0/5.0+32;  
}