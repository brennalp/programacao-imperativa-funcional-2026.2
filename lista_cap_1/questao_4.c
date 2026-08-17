/*
#include <stdio.h>
#include <stdlib.h>;
int Main{}
(
printf( Existem %d semanas no ano.,52);
cout << endl;
system("PAUSE");
return 0;
)

ERROS:
- Ponto e vígula depois de #include <stdlib.h>
- main com "M" maísculo e sem parênteses
- Código fora das chaves da função e entre parênteses
- printf com texto sem aspas
- A linha cout << endl; é da linguagem C++


*/

/*Código corrigido*/
#include <stdio.h>
#include <stdlib.h>

int main () {

    printf("Existem %d semanas no ano.\n", 52);
    system("PAUSE");

    return 0;
}