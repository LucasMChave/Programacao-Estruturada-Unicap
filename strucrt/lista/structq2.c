#include <stdio.h>
#include <string.h>

struct dados{
    char nome[20];
    int idade;
    char adr[50];
};

int main(){
    struct dados pers;
    
    printf("Insira os valores para uma conta bancaria abaixo:\nNome: ");
    scanf(" %20[^\n]", pers.nome);
    printf("Idade: ");
    scanf("%d", &pers.idade);
    printf("Endereço: ");
    scanf(" %50[^\n]", pers.adr);

    return 0;
}

//q2