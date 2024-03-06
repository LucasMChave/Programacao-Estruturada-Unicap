#include <stdio.h>

int main(){
    float real, dol, conv;

    printf("Insira o Valor do produto que planejas comprar: ");
    scanf("%f", &real);
    printf("Insira a a cotação do dolar atual: ");
    scanf("%f", &conv);

    dol = real * conv;

    printf("O preço do produto em dolar é: %.2f",dol);

}

//questao 38