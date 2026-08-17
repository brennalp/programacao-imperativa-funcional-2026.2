## Questão 6:

>Identifique e liste todos os erros de sintaxe (que violam as regras da linguagem C) e de lógica contidos no programa abaixo:

```c

main()
{
    int a=1; b=2; c=3:
    printf("0s números são: %d%d%d\n, a, b, c, d);
    system("pause");
}

```

- A função main está sem a determinação do tipo inteiro
- A declaração das variáveis está incorreta por serem separadas por ponto e vírgula ao invés de vírgula e finalizarem com dois pontos ao invés de ponto e vírgula
- A variável d não foi declarada no programa e está incluída no printf
- Existem apenas 3 especificadores %d na função printf e estão sendo passadas 4 variáveis
- Pela chamada da função printf, a biblioteca stdio.h deveria ser incluída antes da função main
- O texto na função printf não está com as aspas fechadas
- Pela chamada da função system("pause"), deveria incluir a biblioteca stdlib.h junto à stdio.h antes da função main
- Não possui a finalização do bloco com return 0;
