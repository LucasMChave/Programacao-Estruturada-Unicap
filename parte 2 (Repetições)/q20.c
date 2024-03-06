#include <stdio.h>

int main(){
    int n = 1, nsoma = 0, loop = 0, media;

    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n % 3 == 0){
            nsoma += n;
            loop++;
        }
    }
    media = nsoma/loop;

    printf("A Media dos numeros divisiveis por 3 e: %d", media);
}

//questao 20