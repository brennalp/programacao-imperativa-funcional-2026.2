## Questão 02. Entrada Standard de Caracteres vs. Bibliotecas Legadas 

Historicamente, literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que o usuário pressione [ENTER]. Sob a perspectiva da portabilidade moderna da linguagem e do padrão ANSI C:

a) Por que o uso de funções contidas em <conio.h> deve ser evitado em sistemas modernos (Linux, macOS, servidores)?
R.: Porque essa biblioteca não é compatível com esses sistemas, visto que compiladores como GCC e clang não possuem essa biblioteca nativamente. A <conio.h> foi adaptada ao Windows, porém os códigos desenvolvidos com ela não compilam fora desse sistema.

b) Quais são as funções equivalentes e portáveis fornecidas pela biblioteca padrão <stdio.h> para entrada e saída de caracteres?
R.: As funções de entrada e saída da biblioteca padrão <stdio.h> são scanf e printf respectivamente.

c) Escreva um pequeno trecho de código padrão C que leia um caractere do console de maneira robusta, ignorando eventuais quebras de linha ('\n') residuais no buffer do teclado.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {

    char letra;
    printf("Digite um caractere: ");
    scanf(" %c", &letra); //a função scanf interpreta o ENTER como separador de cada entrada, fazendo com que ignore espaços e quebras de linha
    printf("Cartere digitado: %c.\n", letra);

    system("PAUSE");
    return 0;
}
```