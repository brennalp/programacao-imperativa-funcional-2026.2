a) A saída do programa será: Prata, Ouro. Isso acontece porque a variável codigo recebe o valor 2 e inicia a execução no case 2. Mas, por não ter um comando break, o código continua executando até encontrar um comando break ou chegar ao final. Como no case 3 tem um break, ele para a execução

b) A instrução break é utilizada para interromper a execução do bloco switch-case, impedindo que os próximos casos sejam executados. Quando ela é omitida, ocorre o fenômeno chamado fall-through, no qual o programa continua executando os comandos dos casos seguintes até encontrar um break ou chegar ao final do switch.

c) O comando switch aceita expressões de tipos inteiros, como int, char e tipos enumerados (enum). Não é permitido utilizar float ou double, pois o switch realiza a seleção a partir de valores inteiros, e esses tipos representam números de ponto flutuante.

