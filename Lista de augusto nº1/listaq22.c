#include <stdio.h>

int main(){
    int nint, nint2, rest;
    float n1, n2;

    printf("Numero 1: ");
    scanf("%f", &n1);
    printf("Numero 2: ");
    scanf("%f", &n2);

    nint = n1;
    if (n1 - nint >= 0.5){
        nint = nint + 1;
    }

    nint2 = n2;
    if (n2 - nint2 >= 0.5){
        nint2 = nint2 + 1;
    }


    rest = nint % nint2;

    printf("O resto e: %d", rest);
}

//questao 22