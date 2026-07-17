#include <stdio.h>

int main() {

    int i;

    for (i=1; i<=10; i++) {
        printf("%d\n", i);

        if(i==5){
            break;//quebra o for -> quebra por completo
        }
    }

    for (i=1; i<=10; i++) {
        
        if(i==5){
            continue; //5 não vai ser impresso na tela -> salta pra proxima interação
        }
        
        printf("%d\n", i);   
    }

    //break e continue
}