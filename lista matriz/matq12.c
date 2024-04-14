#include <stdio.h>

void somadiag(int lista[3][3]){
    int transposta[3][3];
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i != j){
                transposta[j][i] = lista[i][j];
            }
            else{
                transposta[i][j] = lista[i][j];
            }
        }
    }
    printf("A Matriz atual transposta é :\n");
    for (int k = 0; k < 3; k++){
        for (int h = 0; h < 3; h++){
            printf("|%d|", transposta[k][h]);
        }
    printf("\n");
    }
}

int main(){
    int val = 0, mat[3][3];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            mat[i][j] = val;
            val++;
        }
    }
    printf("Matriz atual: \n");

    for (int k = 0; k < 3; k++){
        for (int h = 0; h < 3; h++){
            printf("|%d|", mat[k][h]);
        }
    printf("\n");
    }
    somadiag(mat);
}

//questao 12