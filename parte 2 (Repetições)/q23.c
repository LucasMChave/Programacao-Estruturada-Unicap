#include <stdio.h>

int main(){
    int n = 1, menvalimp = 99999999;

    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n < menvalimp && n % 2 == 1 && n > 0){
            menvalimp = n;
        }
    }

    printf("O menor valor digitado positivo e Impar e: %d", menvalimp);
}

//questao 23