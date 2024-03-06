#include <stdio.h>
#include <stdlib.h>

int main() {
    char a;

    printf("Insira 1 nome\n");
    scanf("%c", &a);

    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U'){
        printf("Vogal");
    }
    else{
        printf("Consoante");
    }
}
//questao 09