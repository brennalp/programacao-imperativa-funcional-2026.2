## Questão 13 

> No desenvolvimento de programas em C, o que são conceitualmente os arquivos de inclusão (headers com extensão .h)?

c) São arquivos de texto ASCII padrão contendo protótipos de funções, definições de constantes, macros e tipos.

Justificativa que abarca questões 13, 14, 15 e 16: o arquivo .h declara ao compilador quais elementos existem, sem conter o código binário complexo de como elas foram implementadas. A diretiva #include faz o pré-processamento do que existe na biblioteca. O código binário pré-compilado das funções fica armazenado em arquivos de bibliotecas do sistema, que são unidos ao programas na etapa de linkedição.