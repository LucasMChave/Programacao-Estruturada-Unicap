#include <stdio.h>

int main(){
    char gen, nome[20];
    int age;

    printf("Insira seu nome: ");
    gets(nome);
    printf("sua idade: ");
    scanf("%d", &age);
    fflush(stdin);
    printf("e seu genero (responda com M ou m, F ou f): ");
    scanf("%c", &gen);
    fflush(stdin);

    if (age < 25 && (gen == 'f' || gen == 'F')){
        printf("%s, ACEITA", nome);
    }
    else{
        printf("NAO ACEITA");
    }
}

// Questao 06