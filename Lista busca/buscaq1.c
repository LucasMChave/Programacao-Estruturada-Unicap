#include <stdio.h>

int main(){
    int lista[10], maiornum = 0;

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
    }
    printf("O maior numero inserido foi: %d\n", maiornum);

    return 0;
}
//Questao 1