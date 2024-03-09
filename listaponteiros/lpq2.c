#include <stdio.h>

int main(){
    int num, *n;
    float real, *r;
    char nome, *no;

    n = &num; r = &real; no = &nome;

    printf("Insira valores para um nome, um numero inteiro e um numero real: \n");
    scanf("%d", &num);
    scanf("%f", &real);
    fflush(stdin);
    scanf("%c", &nome);

    printf("Valores anteriores: %d, %f, %c\n", *n, *r, *no);

    *n = 69;
    *r = 4.20;
    *no = 's';

    printf("Valores novos: %d, %f, %c\n", num, real, nome);

    return 0;
}
//questao 02