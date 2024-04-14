#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void preenchermat(int mat[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            mat[i][j] = rand() % 100;;
        }
    }
}

void mostrarmat(int mat[4][4]){
    for (int k = 0; k < 4; k++){
        for (int h = 0; h < 4; h++){
            printf("|%d|", mat[k][h]);
        }
    printf("\n");
    }
}

void somarmat(int l1[4][4], int l2[4][4]){
    int maiorvalores[4][4];

    for (int k = 0; k < 4; k++){
        for (int h = 0; h < 4; h++){
            if (l1[k][h] > l2[k][h] || l1[k][h] == l2[k][h]){
                maiorvalores[k][h] = l1[k][h];
            }
            else{
                maiorvalores[k][h] = l2[k][h];
            }   
        }
    }
    printf("Matriz com os maiores valores: \n");
    mostrarmat(maiorvalores);
}

int main(){
    int mata[4][4], matb[4][4];

    preenchermat(mata);
    preenchermat(matb);
    printf("Matriz A: \n");
    mostrarmat(mata);
    printf("\n");
    printf("Matriz B: \n");
    mostrarmat(matb);
    printf("\n");

    somarmat(mata, matb);

    return 0;
}

//questao 06