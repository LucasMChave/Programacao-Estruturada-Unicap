#include <stdio.h>

int main(){
    char cidade;

    printf("Digite o nome de sua Cidade: ");
    scanf("%c", &cidade);

    if (cidade == 'c' || cidade == 'C'){
        printf("Sua cidade comeca coma a letra C");   
    }
}

//questao 21