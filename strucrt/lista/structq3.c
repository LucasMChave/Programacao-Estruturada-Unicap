#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[20];
    int mat;
    char curso[20];
};

int main(){
    struct aluno pers[5];

    printf("Insira os valores do cadastro de 5 alunos:\n");
    for (int i = 0; i < 5; i++){
        printf("Aluno %d\n", i+1);   
        printf("Nome: ");
        scanf(" %20[^\n]", pers[i].nome);
        printf("Numero de matricula: ");
        scanf("%d", &pers[i].mat);
        printf("Curso atual: ");
        scanf(" %50[^\n]", pers[i].curso);
    }
    return 0;
}

//q3