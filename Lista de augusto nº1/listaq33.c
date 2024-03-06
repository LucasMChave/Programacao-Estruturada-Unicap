#include <stdio.h>

int main(){
    int bas, al, area;

    printf("Insira os dados de um triangulo\nBase: ");
    scanf("%d", &bas);
    printf("Altura: ");
    scanf("%d", &al);

    area = (bas * al) / 2;

    printf("Area do quadrado e: %d", area);
}
//questao 33