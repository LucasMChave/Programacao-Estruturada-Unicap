#include <stdio.h>

int main(){
    int n1, n2;

    printf("Numero 1: ");
    scanf("%d", &n1);
    printf("Numero 2: ");
    scanf("%d", &n2);

    if (n1 > n2){
        printf("Numero 1 e maior");
    }
    else{
        printf("Numero 2 e maior");
    }
}
//questao 16