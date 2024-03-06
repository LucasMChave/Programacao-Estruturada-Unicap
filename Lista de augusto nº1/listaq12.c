#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[10], sobren[10];

    printf("Insira seu primeiro nome: ");
    scanf("%s", nome);
    printf("Insira seu segundo nome: ");
    scanf("%s", sobren);

    printf("Nome completo: %s %s", sobren, nome);
}

//questao 12