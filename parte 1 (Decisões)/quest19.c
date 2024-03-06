#include <stdio.h>

int main(){
    int n;

    printf("Insira sua idade: ");
    scanf("%d", &n);

    if (n < 1){
        printf("Bebe");
    }
    else if(n < 12){
        printf("Crianca");
    }
    else if(n < 18){
        printf("Adolecente");
    }
    else{
        printf("Adulto");
    }
}
//questao 19