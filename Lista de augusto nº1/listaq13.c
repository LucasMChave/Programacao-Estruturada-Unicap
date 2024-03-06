#include <stdio.h>

int main(){
    int size = 0;
    char string[99];

    printf("Insira uma palavra: ");
    fgets(string, 99, stdin);

    for (int i = 0; i < 99; i++){
        printf("Valor do elemento %d da string = %c\n",i, string[i]);
        size++;
        if (string[i] == ' '){
            break;
        }
    }

    printf("%s",string);
    printf("A palavra tem %d digitos", size);
}

//questao 13(incompleta)