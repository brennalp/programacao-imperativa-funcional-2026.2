/*
Macros: funções pré processadas
Principalmente para diretivas 
Comunicação direta com o compilador: antes de compilar, defina uma função/inclua a biblioteca 
*/

#define PI 3.1415
//fazer isso dentro de um header para definir

#define POW2(n) ((n)*(n)) //função sem precisar da estrutura

#define areaEsfera(raio) (4*PI*POW2(raio))
//pode ir definindo todas as funções em diretivas -> caso tenha implementado as funções de outra forma, é só mudar o nome da função
//fazer o define pra coisas que n vao mudar - raro usar undef 
//if def, ifndef, undef -> estão sempre ligados a definição de uma constante

//undef remove a definição mais recente de uma macro criada com define
//bloco condicional -> if else if elif endif 

#define GRANDE 10
#define PEQUENO 5
#define MEDIA 7

//pode usar em um programa específico e undef a constante. quando fosse usado em outro lugar, ainda haveria o valor original que poderia ser undef novamente
//usar diretivas na função recursiva, esta sumiria e ficaria estruturada em diretivas

//procedure/procedimentos: função que não tem retorno (void) - como o menu