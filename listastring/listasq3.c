#include <stdio.h>

int main(){
    char pal[10], pal2[10] = "meio nois";

    printf("insira uma string: ");
    gets(pal);

    
    for (int i = 0; i < 10; i++){
        if (pal[i] == pal2[i]){
            printf("Mesmo digito\n");
        }
        else{
            printf("Digito diferente\n");
        }
    }
}
// Questao 03