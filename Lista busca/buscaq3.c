#include <stdio.h>

int main(){
    int lista[10], maiornum = 0;
    int *posicao;

    printf("Insira 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &lista[i]);
    }
    for (int j = 0; j < 10; j++){
        if (lista[j] < maiornum && maiornum == 0){
            maiornum = lista[j];
        }
        else if (lista[j] > maiornum){
            maiornum = lista[j];
        }
        posicao = &lista[j];
    }
    printf("O maior valor e %d, posicao e %p\n", maiornum, posicao);

    return 0;
}
//Questao 3