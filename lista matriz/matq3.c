#include <stdio.h>


int main(){
    int n;

    printf("Digite o tamanho da matriz: ");
    scanf("%d", &n);
    int mat[n][n];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            mat[i][j] = i * j;
            printf("|%d| ", mat[i][j]);
        }
    printf("\n");
    }
}

//questão 03