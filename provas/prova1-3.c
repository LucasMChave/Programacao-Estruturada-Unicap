/*Suponha que você é um desenvolvedor encarregado de criar uma função que realiza a busca
de um elemento inteiro dentro de um vetor. Escreva um programa que contém uma função chamada
buscarElemento que recebe como parâmetros o vetor, seu tamanho e o elemento a ser buscado. A função
deverá mostrar em tela a posição do elemento se ele for encontrado, ou -1 se não for encontrado. Além
disso, a função também deverá imprimir o número de iterações que foram necessárias para encontrar o
elemento buscado (peso 4,0)*/

#include <stdio.h>

int buscarElemento(int vet[], int tam, int busc, int *rep){
    for (int i = 0; i < tam; i++){
        *rep = *rep + 1;
        if (vet[i] == busc){
            return i;
        }
    }
    return -1;
}

int main(){
    int n, pesq, iter = 0;
    printf("Insira quantos elementos estao no vetor:\n");
    scanf("%d", &n);

    int lista[n];
    for (int i = 0; i <= n; i++){
        lista[i] = i*10;
    }

    printf("Insira qual elemento queres achar no vetor:\n");
    scanf("%d", &pesq);

    int el = buscarElemento(lista, n, pesq, &iter);

    printf("O elemento %d esta na posisao %d\n", pesq, el);
    printf("demorou %d iteracoes pra encontrar o elemento", iter);
}

//Questão 03