#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    int n, primeiro = 1, segundo = 1, proximo, termo;

    printf("Digite o numero do termo desejado: ");
    scanf("%d", &n);

    printf("Termos da sequencia: ");

    for (int i = 1; i <= n; i++) {

        termo = primeiro;

        printf("%d ", termo);

        proximo = primeiro + segundo;
        primeiro = segundo;
        segundo = proximo;
    }

    printf("\nValor do termo %d: %d\n", n, termo);

    system("PAUSE");
    return 0;
}