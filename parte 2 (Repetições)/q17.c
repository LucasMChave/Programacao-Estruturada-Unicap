#include <stdio.h>

int main(){
    int n = 1, loopar = 0, looparm = 0;
    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n % 2 == 0){
            loopar++;
        }
        if (n % 2 != 0 && looparm == 0){
            looparm = loopar;
        }
    }
    printf("|%d numeros pares|", looparm);
}

//questao 17