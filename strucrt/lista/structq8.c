#include <stdio.h>

struct Cadastro{
    char nome[10];
    char adr[50];
    int tel;
};

void ordalfabetica(struct Cadastro lista[5]){
    struct Cadastro aux;
    int j;
    for (int i = 1; i < 5; i++){
        aux = lista[i];
        j = i - 1;

        while(j >= 0 && lista[j].nome[0] > aux.nome[0]){
            lista[j + 1] = lista[j];
            j -= 1;
        }
        lista[j + 1] = aux;
    }
}

void mostraralunos(struct Cadastro lista[5]){
    printf("Lista de alunos em ordem alfabetica:\n");
    for (int i = 0; i < 5; i++){
        printf("Aluno %i: %s\n", i+1, lista[i].nome);
    }
}

int main(){
    struct Cadastro cad[5];

    for(int i = 0; i < 5; i++){
        printf("Membro %d:\n", i+1);
        printf("Nome: ");
        scanf(" %10[^\n]", cad[i].nome);
        printf("Endereço: ");
    	scanf(" %50[^\n]", cad[i].adr);
        printf("Telefone: ");
        scanf("%d", &cad[i].tel);
        printf("\n");
    }

    ordalfabetica(cad);
    mostraralunos(cad);
}

//q8
