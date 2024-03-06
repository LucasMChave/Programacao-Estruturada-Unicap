#include <stdio.h>

int main(){
    int bas, al, area;

    printf("Insira os dados de um retangulo quadrado\nBase: ");
    scanf("%d", &bas);
    printf("Altura: ");
    scanf("%d", &al);

    area = bas * al;

    printf("Area do quadrado e: %d", area);
}

//questao 20