#include <stdio.h>
#include <stdlib.h>

int main() {
    int *lista;
    lista = (int *)malloc(5 * sizeof(int));

    if (lista){
        printf("Digite 5 numeros inteiros:\n");
        for (int i = 0; i < 5; i++) {
            scanf("%d", &lista[i]);
        }
        printf("Os numeros digitados foram:\n");
        for (int i = 0; i < 5; i++) {
            printf("N%d: |%d|\n", i+1, lista[i]);
        }
    }
    else{
    printf("Erro ao alocar memoria.");
        return 1;
    }

    free(lista);
    lista = NULL;

    return 0;
}

// q1