#include <stdio.h>

int main(){
    int n = 1, nsoma = 0, loop = 0, media;

    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n >= 50 && n <= 100){
            nsoma += n;
            loop++;
        }
    }
    media = nsoma/loop;

    printf("A Media dos numeros entre 50 e 100 é: %d", media);
}

//questao 22