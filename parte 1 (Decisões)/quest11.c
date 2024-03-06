#include <stdio.h>
#include <math.h>

int main(){
    float peso, al, IMC;

    printf("INSIRA PESO: ");
    scanf("%f", &peso);
    printf("INSIRA ALTURA (em metros): ");
    scanf("%f", &al);

    IMC = peso / (pow(al,2));

    if (IMC < 18.5){
        printf("Abaixo do peso");
    }
    else if(18.5 < IMC && IMC <= 24.9){
        printf("Peso Medio");
    }
    else if(24.9 < IMC && IMC <= 29.9){
        printf("Acima do peso");
    }
    else if(29.9 < IMC && IMC <= 39.9){
        printf("Obesidade");
    }
    else{
        printf("Obesidade Grave");
    }
}
//questao 11