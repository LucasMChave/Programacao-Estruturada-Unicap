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
            strcpy(listaap[qtap].nome, lista[i].nome);
            listaap[qtap].media = lista[i].media;
            listaap[qtap].matr = lista[i].matr;
            qtap++;
        }
        else{
            strcpy(listarep[qtrep].nome, lista[i].nome);
            listarep[qtrep].media = lista[i].media;
            listarep[qtrep].matr = lista[i].matr;
            qtrep++;
        }
    }
}

void mostraralunos(struct Alunos lista[], int n){
    for (int i = 0; i < n; i++){
        printf("Aluno %d: %s com nota %.2f\n", lista[i].matr, lista[i].nome, lista[i].media);
    }
}

int main(){
    struct Alunos tot[10];

    int app = 0, rep = 0;
    printf("Insira os dados de 10 alunos\n");
    for (int i = 0; i < 10; i++){
        printf("Aluno %d\nNome: ", i+1);
        scanf(" %10[^\n]", tot[i].nome);
        printf("Matricula: ");
        scanf("%d", &tot[i].matr);
        printf("Media final: ");
        scanf("%f", &tot[i].media);
        if (tot[i].media < 5.0){
            rep++;
        }
        else{
            app++;
        }
    }

    
    struct Alunos lapp[app];
    struct Alunos lrep[rep];
    veraprovacao(tot, lapp, lrep);

    printf("\n\t|Alunos aprovados|\n");
    mostraralunos(lapp, app);
    printf("\n\t|Alunos reprovados|\n");
    mostraralunos(lrep, rep);
    
}
