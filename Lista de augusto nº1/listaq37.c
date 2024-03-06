#include <stdio.h>

int main(){
    int idade, dias;

    printf("Insira sua idade (Arredonde para o que preferir): ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("Parabens por ter vivido %d dias de vida", dias);

}

//questao 37