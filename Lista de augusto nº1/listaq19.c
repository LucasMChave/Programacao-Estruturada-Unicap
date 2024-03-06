#include <stdio.h>

int main(){
    int est;

    printf("Qual dos estados civis abaixo vc se encontra?\n1) Solteiro\n2) Casado\n3) Separado\n4) Divorciado\n5) Viuvo\n");
    scanf("%d", &est);
    
    switch (est){
        case 1:
        printf("Voce e Solteiro");
        break;
        case 2:
        printf("Voce e Casadp");
        break;
        case 3:
        printf("Voce e Separado");
        break;
        case 4:
        printf("Voce e Divorciado");
        break;
        case 5:
        printf("Voce e Viuvo");
        break;
        default:
        printf("Insira um estado valido: ");

    }
}

// questao 19