#include <stdio.h> 
#include <stdlib.h>
#include <windows.h> /*biblioteca para escrever em português*/

/*a biblioteca nativa é trazida com a tag e arquivos próprios*/
/*std-> standard; io -> input/output*/
/*programa inicia, retorna 0 e fecha, por isso precisa colocar o system("PAUSE") para manter o programa aberto*/

/*short (ocupa so uma parte do espçaço) - usado em microcontroladores, long e unsigned são modificadores de tipo
so usar o modificador o compilador entende como int 
*/

int main () /*função do tipo inteiro*/
{
    int num1; /*fortemente tipado*/
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("\tEste é o número %5d.\n", 5);
    system("PAUSE"); /* função do C que se comunica com SO para so depois fechar o programa */

    return 0;
}