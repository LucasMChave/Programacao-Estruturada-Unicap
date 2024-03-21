#include <stdio.h>


int mostproduto(int lista[16], int prod, int *rep){
    int com = 0, meio, fim = 16;
    while (fim >= com){
        meio = com + (fim - com) / 2;

        if (lista[meio] == prod){
            return meio + 1;
        }

        if (lista[meio] < prod){
            com = meio + 1;
        }
        else{
            fim = meio - 1;
        }
    *rep += 1;
    }
    return -1;
}

int main(){
    int iteracoes = 0, busca;
    int produtoids[16] = {1002, 1234, 1999, 2541, 3119, 3541, 3908, 4125, 4444, 4987, 5000, 5648, 6888, 8021, 8541, 9999};

    printf("Insira a ID do produto que estas procurando (O id e um codigo de 4 digitos onde não existe 0 a esquerda):\n");
    scanf("%d", &busca);

    if (mostproduto(produtoids, busca, &iteracoes) != -1){
        printf("Produto encontrato no corredor %d\n", mostproduto(produtoids,busca,&iteracoes));
        printf("Tivemos %d iteracoes no programa", iteracoes);
    }
    else{
        printf("produto nao encontrado");
    }
    return 0;
}