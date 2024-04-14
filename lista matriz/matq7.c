#include <stdio.h>


int main(){
    int mat[10][10];

    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (i < j){
                mat[i][j] = (2*i) + (7*j);
            }
            else if (i > j){
                mat[i][j] = 5*(j*j) + 1;
            }
            else{
                mat[i][j] = 3*(i*i);
            }
        }
    }

    for (int k = 0; k < 10; k++){
        for (int h = 0; h < 10; h++){
            printf("|%d| ", mat[k][h]);
        }
    printf("\n");
    }
}

//questao 07