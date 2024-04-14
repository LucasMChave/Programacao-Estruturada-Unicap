#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void verificarsem(int lista[5][5]){

}

int main(){
    int num, mat[5][5];
    srand(time(NULL));
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            mat[i][j] = rand() % 100;
        }
    }

    verificarsem(mat);
    printf("Cartela de BINGO gerada: \n");
    for (int k = 0; k < 5; k++){
        for (int h = 0; h < 5; h++){
            printf("|%d|", mat[k][h]);
        }
    printf("\n");
    }
}

//questao 14 (INCOMPLETA)