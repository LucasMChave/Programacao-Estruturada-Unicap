#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int maiornum(int nums[4][4]){
    int maior = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (nums[i][j] > maior){
                maior = nums[i][j];
            }
        }
    }

    return maior;
}


int main(){
    int num, mat[4][4];

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            num = rand() % 100;
            mat[i][j] = num;
        }
    }

    int resp = maiornum(mat);
    printf("O maior numero no array = %d", resp);
}

//questao 04