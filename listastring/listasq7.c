#include <stdio.h>

int main(){
    char pal[20];

    printf("insira uma string: ");
    gets(pal);

    int qt1 = 0;
    for (int i = 0; i < 20; i++){
        if (pal[i] == '1'){
            qt1++;
        }
    }
    printf("Quantidade de 1s: %d\n", qt1);
}
// Questao 07