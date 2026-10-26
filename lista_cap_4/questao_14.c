#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int falta;
    float nota;

    do{
        printf("Digite a nota e a quantidade de faltas respectivamente: \n");
        scanf("%f %d", &nota, &falta);
    } while (nota<0 || nota>10 || falta<0);

    if (nota>=9){
        if(falta<=20){
            printf("Conceito A\n");
        } else{
            printf("Conceito B\n");
        }
    } else if (nota>=7.5) {
        if(falta<=20){
            printf("Conceito B\n");
        } else{
            printf("Conceito C\n");
        }
    } else if (nota>=5) {
        if(falta<=20){
            printf("Conceito C\n");
        } else{
            printf("Conceito D\n");
        } 
    } else if (nota>=4) {
        if(falta<=20){
            printf("Conceito D\n");
        } else{
            printf("Conceito E\n");
        } 
    } else {
        printf("Conceito E\n");
    }
        
    system("PAUSE");
    return 0;
}