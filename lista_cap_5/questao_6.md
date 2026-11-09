Questão 06

a) A diferença está na forma como o compilador procura os arquivos.

- `#include <stdio.h>`: utilizado para incluir bibliotecas padrão da linguagem C. O compilador procura o arquivo nos diretórios de bibliotecas.
- `#include "areas.h"`: utilizado geralmente para incluir arquivos criados pelo próprio programador. O compilador procura primeiro no diretório do projeto.

b) A diretiva `#undef SOMA` remove a definição da macro `SOMA`, impedindo que ela continue sendo utilizada como macro nas próximas instruções do código.

A forma `#undef SOMA(x,y)` está incorreta porque a diretiva `#undef` recebe apenas o nome da macro, sem seus parâmetros.

c) Como `DEBUG` não foi definido, será executado o trecho do `#else`, exibindo:

```
Modo normal
```

Essa decisão é tomada durante o pré-processamento, antes da compilação. As diretivas não aparecem no executável final porque são instruções utilizadas pelo pré-processador para organizar e modificar o código antes de ele ser compilado.