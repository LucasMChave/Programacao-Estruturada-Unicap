#include <stdio.h>

struct vetor{
    float x;
    float y;
    float z;
};

int main(){
    struct vetor vet[2];

    printf("Informe os valores de um vetor inicial e em seguida de um vetor a ser somado\n");

    for (int i = 0; i < 2; i++){
        printf("Altura: ");
        scanf("%f", &vet[i].x);
        printf("Largura: ");
        scanf("%f", &vet[i].y);
        printf("Profundidade: ");
        scanf("%f", &vet[i].z);
    }

    float somavetx = vet[0].x + vet[1].x;
    float somavety = vet[0].y + vet[1].y;
    float somavetz = vet[0].z + vet[1].z;

    printf("A soma dos dois vetores gera um vetor (%.3f, %.3f, %.3f)", somavetx, somavety, somavetz);
}

//q5