#include <stdio.h>

int main(){
    int val = 0, maiorq = 0, mat[4][4];

    printf("Insira valores na maquina:\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &val);
            mat[i][j] = val;
        }
    }

    printf("\n");
    for (int m = 0; m < 4; m++){
        for (int n = 0; n < 4; n++){
            printf("|%d| ", mat[m][n]);
        }
    printf("\n");
    }

    printf("\n");
    for (int k = 0; k < 4; k++){
        for (int h = 0; h < 4; h++){
            if (mat[k][h] > 10){
                maiorq++;
            }
        }
    }

    printf("Total de %d valores acima de 10", maiorq);
    return 0;
}

//questao 01