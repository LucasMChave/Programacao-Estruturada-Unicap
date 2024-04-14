#include <stdio.h>

int main(){
    int mat[5][5];

    
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (i == j){
                mat[i][j] = 1;
            }
            else{
                mat[i][j] = 0;
            }
        }
    }

    for (int m = 0; m < 5; m++){
        for (int n = 0; n < 5; n++){
            printf("|%d| ", mat[m][n]);
        }
    printf("\n");
    }

    return 0;
}

//questao 02