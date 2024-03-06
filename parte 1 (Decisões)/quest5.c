#include <stdio.h>

int main() {
    int n1, n2;

    printf("Insira 2 numeros\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 > n2){
        printf("n1 Maior");
    }
    else if(n2 > n1){
        printf("n2 Maior");        
    }
    else{
        printf("Ambos iguais");
    }
}
//questao 05