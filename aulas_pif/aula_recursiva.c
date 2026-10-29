/*trabalhar com estrutura de dados 
o que é: chama ela mesma pra se resolver - o clássico é o fatorial
5! = 5*4! - resolve um fatorial com outro fatorial: 4! = 4*3! - 3!=3*2! - 2!=2*1! - 1! = 1
definição: n! = n*(n-1)!
toda função recursiva tem um critério de parada no if
tem um loop na sua essencia 
*/

int calcFatorial(int n){
    if(n == 1){ //critério de parada
        return 1;
    } else{
        return n*calcFatorial(n-1); //vai entrando dentro dele mesmo e fazendo a sequencia do fatorial 
    }
    //(n==1) ? 1 : n*calcFatorial(n-1)
}
/*
Vai ficando na memória esses passos 
calcFat(3) = 3*calFat(2) -> 
calcFat(2) = 2*calFat(1) ->
calcFat(1) = 1 (critério de parada)
Ai vai voltando 
2*1 -> 3*2*1
*/

/*Euclides - MDC*/
int calcMDC(int maior, int menor){
    if(numMaior%numMenor == 0){ //critério de parada
        return numMenor;
    } else{
        return calcMDC(numMenor, numMaior%numMenor); //vai entrando dentro dele mesmo e fazendo a sequencia de devisões 
    }
    //(n==1) ? 1 : n*calcFatorial(n-1)
}