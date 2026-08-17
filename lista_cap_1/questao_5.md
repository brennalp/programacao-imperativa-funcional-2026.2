# Questão 5: 

>Analise o seguinte trecho de código em C. Sob a perspectiva do padrão ANSI C, o programa está correto para compilação e execução imediata? Caso negativo, descreva quais elementos cruciais e diretivas estão faltando no código abaixo:

```c
main()
{
    printf("Linguagem C");
    system("pause");
}
```

## Erros: 

>O código não está correto para compilação e execução imediata. Segue lista dos elementos que estão faltando:

- A função main está sem a determinação do tipo inteiro
- Pela chamada da função printf, a biblioteca stdio.h deveria ser incluída antes da função main
- Pela chamada da função system("pause"), deveria incluir a biblioteca stdlib.h junto à stdio.h antes da função main
- Não possui a finalização do bloco com return 0;

