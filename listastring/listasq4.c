#include <stdio.h>

int main(){
    char pal[10];

    printf("insira uma string: ");
    gets(pal);

    for (int i = 0; i < 4; i++){
        printf("%c", pal[i]);
    }
}
// Questao 04