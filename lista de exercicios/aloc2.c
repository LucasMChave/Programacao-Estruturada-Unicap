#include <stdio.h>
#include <stdlib.h>


int main(){
    int sizevet;
    int *x;

    printf("Insira o tamanho de um vetor: ");
    scanf("%d", &sizevet);

    x = malloc(sizevet * sizeof(x));

    if (x){
        printf("Insira os valores do vetor:\n");
        for (int i = 0; i < sizevet; i++){
            scanf("%d", &x[i]);
        }
        printf("\n");
        printf("Os valores do vetor sao: \n");
        for (int i = 0; i < sizevet; i++){
            printf("Valor %d = %d\n", i+1, x[i]);
        }
    }
    else{
        printf("Erro ao alocar memoria\n");
    }
    free(x);
    x = NULL;
}

// q2