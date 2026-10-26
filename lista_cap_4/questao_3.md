a) O funcionamento da segunda linha de código está associado à condição do operador ternário. Caso média seja maior ou igual a 7, a situação recebe "A". Caso contrário, irá receber "R". Com a média sendo igual a 6.8, a variável vai receber "R".

b) 
```c
if (media>=7){
    situacao = 'A';
} else {
    situacao = 'R';
}

c) O operador ternário não pode substituir qualquer estrutura if-else, pois, embora permita avaliar várias condições por meio de operadores ternários aninhados, ele trabalha com expressões e não com blocos de múltiplos comandos. Assim, a estrutura if-else é mais adequada quando é necessário executar várias instruções dentro de cada condição.

