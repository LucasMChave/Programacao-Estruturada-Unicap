#include <stdio.h>

int main(){
    int nint;
    float ndec;

    printf("Insira um numero decimal: ");
    scanf("%f", &ndec);

    nint = ndec;

    if (ndec - nint >= 0.5){
        nint = nint + 1;
    }

    printf("%d", nint);
}

//questao 39