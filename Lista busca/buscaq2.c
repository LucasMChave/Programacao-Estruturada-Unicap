#include <stdio.h>

int main(){
    int lista[10], menornum = 2147483647;

    printf("Insira 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &lista[i]);
    }
    for (int j = 0; j < 10; j++){
        if (lista[j] < menornum){
            menornum = lista[j];
        }
    }
    printf("O menor numero inserido foi: %d\n", menornum);

    return 0;
}
//Questao 2