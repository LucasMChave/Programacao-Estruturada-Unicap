#include <stdio.h>

void insertonSort(int array[], int tamanhodoarray){
    int i, atual, j;
    for (i = 1; i < tamanhodoarray;  i++){
        atual = array[i];
        j = i -1;

    while (j >= 0 && array[j] > atual){
        array[j+1] = array[j];
        j = j - 1;
    }
    array[j + 1] = atual;
    }
}

void mostrarlista(int lista[10]){
    for (int i = 0; i < 10; i ++){
        printf("|%d| ", lista[i]);
    }
}

int main(){
    int list[10];

    printf("Digite 10 numeros\n");
    for (int i = 0; i < 10; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &list[i]);
    }
    insertonSort(list, 10);
    printf("Lista ordenada de forma crescente:\n");
    mostrarlista(list);

    return 0;
}
