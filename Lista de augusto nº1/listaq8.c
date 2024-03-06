#include <stdio.h>

int main(){
    int idade, ano;

    printf("Insira seu ano de nascimento: ");
    scanf("%d", &ano);

    idade = 2024 - ano;

    printf("Desconsiderando dia e mes, Sua idade é: %d", idade);
}

//questao 08