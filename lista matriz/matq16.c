#include <stdio.h>

void imprimir(int arr[10]){
    for (int i = 0; i < 10; i++){
        printf("%d, ", arr[i]);
    }
}


void pnotas(int lista[10][3]){
    int listaal1[10], listaal2[10], listaal3[10];

    for (int i = 0; i < 10; i++){
        int mn = 100;
        for (int j = 0; j < 3; j++){
            if (lista[i][j] < mn){
                mn = j+1; 
            }
        if (mn == 1){
            listaal1[i] = mn;
        }
        else if (mn == 2){
            listaal1[i] = mn;
        }
        else{
            listaal1[i] = mn;
        }
        }
    }
    printf("Alunos cujo pior nota foi a primeira: ");
    imprimir(listaal1);
    printf("Alunos cujo pior nota foi a segundaa: ");
    imprimir(listaal2);
    printf("Alunos cujo pior nota foi a terceira: ");
    imprimir(listaal3);
}

int main(){
    int notas[10][3];

    for (int i = 0; i < 10; i++){
        printf("Insira as notas do aluno %d em cada prova respectiva\n", i+1);
        for (int j = 0; j < 3; j++){
            printf("Prova %i: ", j+1);
            scanf("%d", &notas[i][j]);
        }
    }
    printf("notas:\n");
    for (int k = 0; k < 10; k++){
        printf("Aluno %d: ", k+1);
        for (int h = 0; h < 3; h++){
            printf("|P%d:, %d |", h+1, notas[k][h]);
        }
    printf("\n");
    }
    printf("\n");
    for (int k = 0; k < 10; k++){
        int x = 100, y = 0;
        printf("Pior nota do aluno %d: ", k+1);
        for (int h = 0; h < 3; h++){
            if (notas[k][h] < x){
                x = notas[k][h];
                y = h;
            }
        }
        printf("%d\n", y+1);
    }
    printf("\n");
    pnotas(notas);
}

//questao 16