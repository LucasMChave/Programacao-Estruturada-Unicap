#include <stdio.h>

int main(){
    int lista[10], maiornum = 0, menornum = 2147483647;
    int *posicao, *posicaom;

    printf("Insira 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &lista[i]);
    }
    for (int j = 0; j < 10; j++){
        if (lista[j] < maiornum && maiornum == 0){
            maiornum = lista[j];
            posicao = &lista[j];
        }
        else if (lista[j] > maiornum){
            maiornum = lista[j];
            posicao = &lista[j];
        }
        if (lista[j] < menornum){
            menornum = lista[j];
            posicaom = &lista[j];
        }

    }
    printf("O maior valor e %d, na posicao %p\n", maiornum, posicao);
    printf("e o menor valor: %d, na posicao %p\n", menornum, posicaom); 

    return 0;
}
//Questao 4