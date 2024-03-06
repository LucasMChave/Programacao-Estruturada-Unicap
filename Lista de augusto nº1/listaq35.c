#include <stdio.h>

int main(){

    int bas, al, perm;

    printf("Insira os dados de um retangulo quadrado\nBase: ");
    scanf("%d", &bas);
    printf("Altura: ");
    scanf("%d", &al);

    perm = bas*2 + al*2;

    printf("Perimetro do quadrado e: %d", perm);
}
//questao 35