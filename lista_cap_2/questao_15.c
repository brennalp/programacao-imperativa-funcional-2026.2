#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    float nota1, nota2, nota3, nota4, nota, media_aritmetica, media_ponderada;

    printf("Digite as 4 notas do aluno separando por espaço: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4); //espaço dado no scanf já 

    media_aritmetica = (nota1+nota2+nota3+nota4)/4;
    media_ponderada = (1*nota1+1*nota2+2*nota3+2*nota4)/6;


    printf("A média aritmética: %.2f.\n", media_aritmetica);
    printf("A média ponderada: %.2f.\n", media_ponderada);

    system("PAUSE");
    return 0;
}

/*clean code: evitar repetir código

media/=4.0 - mesmo a media sendo float, colcoar o denominador como 4.0 melhora 

*/