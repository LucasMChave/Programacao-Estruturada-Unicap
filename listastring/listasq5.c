#include <stdio.h>
#include <string.h>

int main(){
    char pal[20];

    printf("insira uma string: ");
    gets(pal);

    int tam;
    tam = strlen(pal);

    for (int i = 0; i < 20; i++){
        if (pal[i] == 32){
            tam--;
        }
    }

    printf("Quantidade de letras: %d\n", tam);

}
// Questao 05