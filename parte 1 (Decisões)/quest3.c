#include <stdio.h>

int main(){
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n > 0){
         printf("Numero Maior q 0");
    }
    else if(n < 0){
         printf("Numero Menor q 0");
    }
    else{
        printf("Numero = 0");
    }
}

//questao 03