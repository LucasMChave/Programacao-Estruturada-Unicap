#include <stdio.h>

int main(){
    float n1, n2, som, sub, mult, div;

    printf("Digite 2 numeros\n");
    printf("1 Numero: ");
    scanf("%f", &n1);
    printf("2 Numero: ");
    scanf("%f", &n2);

    som = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;
    
    printf("Soma = %.2f\nSubtração = %.2f\nMultiplicação = %.2f\nDivisão = %.2f", som, sub, mult, div);
}

//questao 32