#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char nome[19];
    int qtchars;

    printf("Insira seu nome: ");
    fgets(nome, 20, stdin);

    for (int i = 0; i < 20; i++){
        if (nome[i] == ' '){
            qtchars = i+1;
        }
    }

    printf("%s", nome);
    printf("O nome possui %d caracteres", qtchars);
}

//questao 18 (incompleta)