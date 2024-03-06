#include <stdio.h>

int main(){
    float cel, far;

    printf("Esse programa calculara as medidas de conversão entre as temperaturas, insira a conversao de celcius:\n");
    scanf("%f", &cel);

    far = (cel*9/5)+32;

    printf("A conversao leva pra %f", far);
}

// questao 41