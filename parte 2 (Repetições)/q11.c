#include <stdio.h>

int main(){
    int n = 1, nmaior = 0, nmenor = 999999999;

    while (n != 0){
        scanf("%d", &n);

        if (n > nmaior){
            nmaior = n;
        }
        else if (n < nmenor){
            nmenor = n;
        }
    }
    printf("Maior Numero: |%d|, e Menor Numero |%d|", nmaior, nmenor);
}

//questao 11