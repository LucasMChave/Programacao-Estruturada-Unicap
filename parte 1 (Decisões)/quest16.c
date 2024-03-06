#include <stdio.h>

int main(){
    int nota;

    printf("Insire sua nota (de 1 a 5) para a avaliação ");
    scanf("%d", nota);

    switch(nota){
        case 1: 
            printf("Muito insuficiente\n"); 
            break;
        case 2: 
            printf("Insuficiente\n"); 
            break;
        case 3: 
            printf("Mediano\n"); 
            break;
        case 4: 
            printf("Bom\n"); 
            break;
        case 5: 
            printf("Muito Bom\n"); 
            break;
        default: 
            printf("Insira uma pontuação valida\n");
    }
}
//questao 16