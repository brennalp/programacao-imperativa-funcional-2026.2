a) A saída será: Idoso, Adulto, Jovem. Múltiplas mensagens são exibidas pois vários blocos de if independentes foram escritos e a variável idade ser igual a 65 faz com que os 3 sejam verdadeiros

b) Uma sequência de comando if independentes vão testar condições distintas sem considerar os resultados anteriores, podendendo gerar múltiplas impressões ou operações. Já no comando encadeado, cada parte vai sendo testada em sequência e caso seja falsa, passa para o próximo comando, garantindo que apenas um seja executado de fato

c) 

```c
if(idade>=60){
    printf("Idoso\n");

} else if (idade>=18) {
    printf("Adulto\n");
} else if (idade>=12) {
    printf("Jovem\n");
} else {
    printf("Criança\n");
}
```