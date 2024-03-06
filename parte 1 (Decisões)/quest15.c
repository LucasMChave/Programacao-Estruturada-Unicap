#include <stdio.h>

int main(){
    char sem[10];

    printf("Insira um dia da semana: ");
    scanf("%s", sem);

    if (sem[0] == 's'){
        if (sem[1] == 'e'){
            printf("Dia da Semana");
        }
        else{
            printf("Fim de semana");
        }
    }
    else if(sem[0] == 'd'){
        printf("Fim de semana");
    }
    else{
        printf("Dia da semana");
    }
}
// questao 15
