#include <stdio.h>

struct cadastro{
    char nome[20];
    int matr;
    int CD;
    float n1;
    float n2;
    float media;

};

int main(){
    struct cadastro cad[10];

    /*
    Matricula até 4 digitos;

    Disciplinas:
    1 = Matematica (MAT)
    2 = Linguagens (LIN)
    3 = Historia (HIS)
    4 = Geografia (GEO)
    5 = Ciencias da Natureza (CNA)
    */

    printf("Insira os dados de 10 alunos:\n");
    for (int i = 0; i < 10; i++){
        printf("Aluno %d\nNome: ", i+1);
        scanf(" %50[^\n]", cad[i].nome);
        printf("Matricula (4 digitos): ");
        scanf("%d", &cad[i].matr);
        while (cad[i].matr < 1111 || cad[i].matr > 9999){
            printf("Insira uma matricula valida: ");
            scanf("%d", &cad[i].matr);
        }
        printf("Codigo da Disciplina (1-5): ");
        scanf("%d", &cad[i].CD);
        while (cad[i].CD < 1 || cad[i].CD > 5){
            printf("Insira um codigo valido: ");
            scanf("%d", &cad[i].CD);
        }
        printf("Nota 1: ");
        scanf("%f", &cad[i].n1);
        printf("Nota 2: ");
        scanf("%f", &cad[i].n2);
        cad[i].media = (cad[i].n1 + (cad[i].n2*2))/3;
        printf("\n");
    }

    printf("Dados dos alunos:\n| NOME      \t| MATRIC. | DISC. | NOTA 1 | NOTA 2 | MEDIA |\n");
    for (int i = 0; i < 10; i++){
            if (cad[i].CD == 1){
                printf("| %s \t| %d \t| MAT \t| %.2f \t| %.2f \t| %.2f |\n", cad[i].nome, cad[i].matr, cad[i].n1, cad[i].n2, cad[i].media);
            }
            else if (cad[i].CD == 2){
                printf("| %s \t| %d \t| LIN \t| %.2f \t| %.2f \t| %.2f |\n", cad[i].nome, cad[i].matr, cad[i].n1, cad[i].n2, cad[i].media);
            }
            else if (cad[i].CD == 3){
                printf("| %s \t| %d \t| HIS \t| %.2f \t| %.2f \t| %.2f |\n", cad[i].nome, cad[i].matr, cad[i].n1, cad[i].n2, cad[i].media);
            }
            else if (cad[i].CD == 4){
                printf("| %s \t| %d \t| GEO \t| %.2f \t| %.2f \t| %.2f |\n", cad[i].nome, cad[i].matr, cad[i].n1, cad[i].n2, cad[i].media);
            }
            else if (cad[i].CD == 5){
                printf("| %s \t| %d \t| CNA \t| %.2f \t| %.2f \t| %.2f |\n", cad[i].nome, cad[i].matr, cad[i].n1, cad[i].n2, cad[i].media);
            }
    }
}

//q6