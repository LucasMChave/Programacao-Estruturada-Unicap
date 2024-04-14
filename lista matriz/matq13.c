#include <stdio.h>

void acimazeros(int lista[4][4]){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (j > i){
                lista[i][j] = 0;
            }
        }
    }
    printf("Matriz alterada: \n");
    for (int k = 0; k < 4; k++){
        for (int h = 0; h < 4; h++){
            printf("|%d|", lista[k][h]);
        }
    printf("\n");
    }
}

int main(){
    int val = 1, mat[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            mat[i][j] = val;
            val++;
        }
    }
    printf("Matriz principal: \n");
    for (int k = 0; k < 4; k++){
        for (int h = 0; h < 4; h++){
            printf("|%d|", mat[k][h]);
        }
    printf("\n");
    }

    acimazeros(mat);
}

//questao 13