/*Crie um programa que contenha uma função que permita passar por parâmetro dois
números inteiros A e B. A função deverá calcular a diferença entre estes dois números e armazenar o
resultado na variável B. Esta função não deverá possuir retorno, mas deverá modificar o valor do segundo
parâmetro. Imprima os valores de A e B na função principal (peso 3,0).*/

#include <stdio.h>

void modvalor(int a, int *b){
    if (a > *b){
        *b = a - *b;
    }
    else if (*b > a){
        *b = *b - a;
    }
    else{
        *b = 0;
    }
}

int main(){
    int A, B;

    printf("Insira os valores para as variaveis\nA: ");
    scanf("%d", &A);
    printf("B: ");
    scanf("%d", &B);

    modvalor(A, &B);

    printf("Valor A = %d\nValor B = %d",A , B);
}

//Questão 01