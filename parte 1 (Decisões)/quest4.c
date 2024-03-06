#include <stdio.h>

int main(){
    int n;

    printf("Insira sua idade: ");
    scanf("%d", &n);

    if (n >= 18){
         printf("Maior de idade");
    }
    else if(n < 18){
         printf("Menor de idade");
    }
}
//questao 04