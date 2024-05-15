#include <stdio.h>
#include <stdlib.h>

//Faça um programa que leia do usuário o tamanho de um vetor a ser lido e faça a alocação dinâmica de memória.
//Em seguida, leia do usuário seus valores e imprima o vetor lido.

int main(){
    int sizevet, npares = 0, nimpares = 0;
    int *x;

    printf("Insira o tamanho de um vetor: ");
    scanf("%d", &sizevet);

    x = malloc(sizevet * sizeof(x));

    if (x){
        printf("Insira os valores do vetor:\n");
        for (int i = 0; i < sizevet; i++){
            scanf("%d", &x[i]);
            if(x[i] % 2 == 0){
                npares++;
            }
            else{
                nimpares++;
            }
        }
        printf("\n");
        printf("Os valores do vetor sao: \n");
        for (int i = 0; i < sizevet; i++){
            printf("Valor %d = %d\n", i+1, x[i]);
        }
        printf("O vetor teve %d numeros pares e %d numeros impares", npares, nimpares);
    }
    else{
        printf("Erro ao alocar memoria\n");
    }

    free(x);
    x = NULL;
}

// q3