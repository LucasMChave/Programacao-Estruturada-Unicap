#include <stdio.h>
#include <string.h>

struct aluno{
    char nome[20];
    int mat;
    float nota1;
    float nota2;
    float nota3;
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
        printf("Insira as notas do aluno nas respectivas provas:\n");
        printf("Prova 1: ");
        scanf("%f", &pers[i].nota1);
        printf("Prova 2: ");
        scanf("%f", &pers[i].nota2);
        printf("Prova 3: ");
        scanf("%f", &pers[i].nota3);
    }

    int mnal, menmedal, maimedal;
    float maiornota = 0, mediatemp, maiormedia = 0, menormedia = 1111;

    for (int i = 0; i < 5; i++){
        if (pers[i].nota1 > maiornota){
            maiornota = pers[i].nota1;
            mnal = i;
        }

        mediatemp = (pers[i].nota1 + pers[i].nota2 + pers[i].nota3)/3;
        if (mediatemp >= 6.0){
            printf("\n|Aluno %s, foi aprovado|\n", pers[i].nome);
        }
        else{
            printf("\n|Aluno %s, foi reprovado|\n", pers[i].nome);
        }

        if (mediatemp > maiormedia){
            maiormedia = mediatemp;
            maimedal = i;
        }
        else if (mediatemp < menormedia){
            menormedia = mediatemp;
            menmedal = i;
        }
    }
    printf("\n");
    printf("O aluno com a melhor prova um foi %s com nota %0.2f!\n", pers[mnal].nome, maiornota);
    printf("A menor media foi %0.2f de aluno %s\n", menormedia, pers[menmedal].nome);
    printf("A maior media foi %0.2f de aluno %s\n", maiormedia, pers[maimedal].nome);

    /*printf("\nNotas e Medias Gerais\n");
    printf("Prova 1 | Prova 2 | Prova 3 | Media | Aprovação?");
    for (int i = 0; i < 5; i++){
        
    }
    */
    return 0;
}

//q4