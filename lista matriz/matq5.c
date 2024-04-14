#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void acharx(int lista[5][5], int busca){
    int achou = 1;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (lista[i][j] == busca){
                printf("O valor %d foi encontrado na posicao {%d, %d}\n", busca, i, j);
                achou = 0;
            }
        }
    }
    if (achou == 0){
        return;
    }
    else{
        printf("Valor n encontrado");
    }
}


int main(){
    int x, mat[5][5];
    
    printf("Insira o valor a ser buscado: ");
    scanf("%d", &x);
    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            mat[i][j] = rand() % 100;
        }
    }

    acharx(mat, x);
}

//questao 05