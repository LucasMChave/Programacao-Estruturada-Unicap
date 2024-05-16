#include <stdio.h>

struct cadastro{
    char nome[50];
    int nota1;
    int nota2;
    float media;
};

int main(){
    struct cadastro cad1;
    struct cadastro cad2 = {"Carlos",10,8,9.0};

    printf("Insira o nome do aluno\n");
    fgets(cad1.nome, 50, stdin);
    fflush(stdin);
    int lim = strlen(cad1.nome);
    cad1.nome[lim-1] = '\0';
    printf("Insira as notas do aluno:\n");
    scanf("%d", &cad1.nota1);
    scanf("%d", &cad1.nota2);

    cad1.media = ((float)cad1.nota1 + (float)cad1.nota2)/2;
    printf("O aluno %s foi ", cad1.nome);
    if(cad1.media >= 6){
        printf("Aprovado com nota %.1f\n", cad1.media);

    }
    else{
        printf("Reprovado com nota %.1f\n", cad1.media);
    }

    printf("O aluno %s, foi aprovado com media %.1f, com as notas %d e %d", cad2.nome, cad2.media, cad2.nota1, cad2.nota2);

    return 0;
}