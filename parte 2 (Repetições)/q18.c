#include <stdio.h>

int main(){
    int n = 1, loopar = 0, loopimpar = 0;
    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n % 2 == 0){
            loopar++;
        }
        else{
            loopimpar++;
        }
    }
    printf("|%d numeros pares|\n", loopar);
    printf("|%d numeros impares|", loopimpar);
}

//questao 18