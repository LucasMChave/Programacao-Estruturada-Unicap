#include <stdio.h>

int main(){
    int n = 1, nsoma = 0, loop = 0, media;

    while (n != -1){
        scanf("%d", &n);
        if (n == -1){
            break;
        }
        nsoma += n;
        loop++;
    }
    media = nsoma/loop;

    printf("A Media dos numeros é: %d", media);
}

//questao 12