#include <stdio.h>
#include <stdlib.h>

int main() {
    char a[20], b[20];

    printf("Insira 2 nomes\n");
    scanf("%s", a);
    scanf("%s", b);

    if (strlen(a) > strlen(b)){
        printf("a tem mais caracteres");
    }
    else if(strlen(b) > strlen(a)){
        printf("b tem mais caracteres");
    }
    else{
        printf("Tamanho igual em ambas");
    }
}
// questao 08