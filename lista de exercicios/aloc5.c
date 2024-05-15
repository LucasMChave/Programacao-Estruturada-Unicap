#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int n, x;

    printf("Insira dois valores 1 a 100\nPrimeiro valor: ");
    scanf("%d", &n);
    printf("Segundo valor: ");
    scanf("%d", &x);
    while(n < 1 || n > 100){
        printf("Insira um primeiro valor valido (de 1 a 100)");
        scanf("%d", &n);
    }
    while(x < 1 || x > 100){
        printf("Insira um segundo valor valido (de 1 a 100)");
        scanf("%d", &x);
    }

    int * listan = malloc(n * sizeof(int));

    printf("Valores em uma lista aleatoria multiplos de x:\n");
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++){
        listan[i] = rand()%101;
        if (listan[i] % x == 0 && listan[i] != 0){
            printf("|%d|\n", listan[i]);
        }
    }

    free(listan);
    listan = NULL;
}

// q5