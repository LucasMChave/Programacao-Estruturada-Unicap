#include <stdio.h>
#include <math.h>

int main(){
    int peso, al, IMC;

    printf("INSIRA PESO: ");
    scanf("%d", &peso);
    printf("INSIRA ALTURA: ");
    scanf("%d", &al);

    IMC = peso / (pow(al,2));

    printf("RESULTADO: %d", IMC);
}

//questao 17