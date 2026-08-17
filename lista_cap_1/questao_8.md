## Questão 8

>Explique detalhadamente o comportamento do programa abaixo quando executado no console. Apresente qual será a saída exata gerada pelas sequências de escape utilizadas no formato de controle:

```c
    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {
        printf("\n\t\"Primeiro programa\"");
        system("PAUSE");
        return 0;
    }
```

1. Primeiro, serão incluídas as bibliotecas de input/output e a que contém a função system para serem utilizadas pelo programa. 

2. Após isso, a função main será executada, printando uma quebra de linha inicial seguida de um espaçamento tabular e com a frase Primeiro programa entre aspas duplas. Isso é possível devido ao uso do escape \", o que faz o compilador entender que a string não finalizou. 

3. A função system ("PAUSE") congela a execução do sistema e irá exibir a frase Pressione qualquer tecla para continuar na mesma linha por não ter um "\n"

4. O comando return 0 indica que o programa finalizou com sucesso

### A saída do programa:

```text

	    "Primeiro programa"Pressione qualquer tecla para continuar . . .
```