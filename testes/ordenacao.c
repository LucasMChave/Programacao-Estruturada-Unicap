#include <stdio.h>

void ordenarlistad(int lista[10]){
    int temp = 0;
    for (int i = 10; i > 0; i--){
        for (int j = i-1; j >= 0; j--){
            if (lista[i] > lista[j]){
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
    }
}

void ordenarlista(int lista[10]){
    int temp = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j <= 10; j++){
            if (lista[i] < lista[j]){
                temp = lista[i];
                lista[i] = lista[j];
                lista[j] = temp;
            }
        }
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
    ordenarlistad(list);
    printf("Lista ordenada de forma decrescente:\n");
    mostrarlista(list);
    printf("\n");
    ordenarlista(list);
    printf("Lista ordenada de forma crescente:\n");
    mostrarlista(list);

    return 0;
}