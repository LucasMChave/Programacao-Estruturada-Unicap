#include <stdio.h>

int main(){
    int n = 1, loop = 0;

    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n >= 1000 || n < -1000){
            loop++;
        }
    }

    printf("Temos %d numeros com mais de 3 digitos", loop);
}

//questao 21