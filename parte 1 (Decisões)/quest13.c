#include <stdio.h>

int main(){
    float sal;

    printf("Insira seu salario atual: ");
    scanf("%f", sal);

    if (sal <= 1500){
        printf("Voce tera um aumento de 15%");
    }
    else{
        printf("Voce tera um aumento de 10%");
    }
}
//questao 13