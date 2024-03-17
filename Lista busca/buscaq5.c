#include <stdio.h>

int buscasim(int list[10]){
    int valtemp;
    for (int j = 0; j < 10; j ++){
        valtemp = list[j];
        for (int i = j+1; i < 10; i ++){
            if (valtemp == list[i]){
                return valtemp;
            }
        }
    }
    return 0;
}

int main(){
    int lista[10];

    printf("Insira 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &lista[i]);
    }
    printf("O valor repetido = %d", buscasim(lista));
}
//Questao 5