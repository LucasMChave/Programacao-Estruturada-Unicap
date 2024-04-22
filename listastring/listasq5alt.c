#include <stdio.h>

int main(){
    char pal[20];

    printf("insira uma string: ");
    gets(pal);

    int val, letras = 0;
    for (int i = 0; i > 20; i++){
        val = pal[i];
        if (((val >= 65) && (val <= 90)) || ((val >= 97) && (val <= 122))){
            letras++;
        }
    }

    printf("Quantidade de letras: %d\n", letras);

}
// Questao 05 (incompleta)