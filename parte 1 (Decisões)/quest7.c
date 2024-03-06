#include <stdio.h>

int main() {
    int n1, n2, n3, media;

    printf("Insira as notas das provas do aluno\n");
    printf("Nota 1: ");
    scanf("%d", &n1);
    printf("Nota 2: ");
    scanf("%d", &n2);
    printf("Nota 3: ");
    scanf("%d", &n3);

    media = (n1+n2+n3)/3;

    if (media >= 7){
        printf("Aprovado");
    }
    else{
        printf("Reprovado");
    }
}

//questao 07