Questão 05

a) A saída do primeiro `printf` será `25`, enquanto a do segundo será `11`.

A macro `SQR(x)` utiliza parênteses para proteger o argumento e a multiplicação. Assim, `SQR(2+3)` é substituído por `((2+3)*(2+3))`, resultando em `25`.

Já a macro `DOBRO(x)` não utiliza parênteses para proteger o argumento. Por isso, `DOBRO(2+3)` é substituído por `2+3*2`, resultando em `8`, e não `11`.

Correção: a saída do segundo `printf` é `8`, pois a multiplicação tem prioridade sobre a adição.

b) A diretiva `#define` não termina com ponto e vírgula porque é uma instrução do pré-processador, que realiza a substituição do identificador antes da compilação.

Por convenção, os identificadores são escritos em letras maiúsculas para facilitar a identificação de constantes e macros no código.

c) O erro está no espaço entre o nome da macro e o parêntese. Em `#define PRN (n) printf("%d", n)`, o pré-processador interpreta `PRN` como uma macro sem argumentos, e não como uma macro que recebe `n`.

A forma correta é:

```
#define PRN(n) printf("%d", n)
```

Uma diferença entre uma macro com argumentos e uma função comum é que a macro realiza substituição de texto pelo pré-processador antes da compilação, enquanto uma função é executada durante o programa.