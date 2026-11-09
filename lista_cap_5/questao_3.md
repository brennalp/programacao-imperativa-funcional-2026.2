Questão 03

a)

- `void exibe_mensagem(char* msg);`: recebe um parâmetro do tipo `char*` e não retorna nenhum valor.
- `int obter_codigo(void);`: não recebe parâmetros e retorna um valor do tipo `int`.
- `void limpar_tela(void);`: não recebe parâmetros e não retorna nenhum valor.

b) Uma função com retorno executa uma operação e devolve um valor que pode ser utilizado em outras partes do programa. Por exemplo, uma função que calcula a média de notas e retorna o resultado.

Uma função `void`, também chamada de procedimento, executa uma tarefa, mas não devolve um valor. Por exemplo, uma função que exibe uma mensagem na tela ou limpa o terminal.

c) Não. A chamada `x = limpar_tela();` não é válida porque a função `limpar_tela()` possui retorno do tipo `void`, ou seja, não devolve nenhum valor que possa ser armazenado na variável `x`.