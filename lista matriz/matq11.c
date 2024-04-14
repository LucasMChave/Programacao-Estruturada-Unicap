#include <stdio.h>

void somadiag(int lista[3][3]){
    int soma = 0;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i + j == 2){
                soma += lista[i][j];
            }
        }
    }
    printf("Soma dos valores da diagonal secundaria = %d", soma);
}

int main(){
    int val = 0, mat[3][3];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            mat[i][j] = val;
            val++;
        }
    }
    somadiag(mat);
}

//questao 11