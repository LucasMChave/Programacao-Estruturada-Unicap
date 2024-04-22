#include <stdio.h>

int main(){
    char pal[10];

    printf("insira uma string: ");
    gets(pal);

    int plen = 0;
    for (int i = 0; i < 10; i++){
        if (pal[i] != '\0'){
            plen++;
        }
        else{
            break;
        }
    }
    printf("string de tamanho %d", plen);
}
// Questao 02