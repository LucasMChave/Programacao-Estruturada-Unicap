#include <stdio.h>

struct cadastro{
    char nome[50];
    int idade;
    int grade;
    float nota1;
    float nota2;
    float media;
};

int main(){
    struct cadastro cad[2];

    printf("Insira as informações dos 10 alunos na sala\n");
    for (int i = 0; i < 2; i++){
        printf("Aluno %d\nNome: ", i+1);
        scanf(" %50[^\n]", cad[i].nome);
        printf("Idade: ");
        scanf("%d", &cad[i].idade);
        printf("Grade curricular (1-12): ");
        scanf("%d", &cad[i].grade);
        printf("Notas:\nPrimeira: ");
        scanf("%f", &cad[i].nota1);
        printf("Segunda: ");
        scanf("%f", &cad[i].nota2);
        cad[i].media = ((float)cad[i].nota1 + (float)cad[i].nota2)/2;        
    }

    /*
    int opc;
    printf("Insira o cadastro que quieres verificar");
    scanf("%d", &opc);
    opc -= 1;*/
}