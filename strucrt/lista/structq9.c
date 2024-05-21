#include <stdio.h>
#include <string.h>

struct Alunos{
    char nome[20];
    int matr;
    float media;
};

void veraprovacao(struct Alunos lista[10], struct Alunos listaap[10], struct Alunos listarep[10]){
    int qtap = 0, qtrep = 0;
    for (int i = 0; i < 10; i++){
        if (lista[i].media >= 5.0){
            strcpy(lista[i].nome, listaap[qtap].nome);
            listaap[qtap].media = lista[i].media;
            listaap[qtap].matr = lista[i].matr;
            qtap++;
        }
        else{
            strcpy(lista[i].nome, listarep[qtrep].nome);
            listarep[qtrep].media = lista[i].media;
            listarep[qtrep].matr = lista[i].matr;
            qtrep++;
        }
    }
}

void mostraralunos(struct Alunos lista[10]){
    for (int i = 0; i < 10; i++){
        printf("Aluno %i: %s com nota %.2f\n", i+1, lista[i].nome, lista[i].media);
    }
}

int main(){
    struct Alunos tot[10];
    struct Alunos app[10];
    struct Alunos rep[10];

    printf("Insira os dados de 10 alunos\n");
    for (int i = 0; i < 10; i++){
        printf("Aluno %d\nNome: ", i+1);
        scanf(" %10[^\n]", tot[i].nome);
        printf("Matricula: ");
        scanf("%d", &tot[i].matr);
        printf("Media final: ");
        scanf("%f", &tot[i].media);
    }

    mostraralunos(tot);

    
    veraprovacao(tot, app, rep);

    printf("\n\t|Alunos aprovados|\n");
    mostraralunos(app);
    printf("\n\t|Alunos reprovados|\n");
    mostraralunos(rep);
    
}