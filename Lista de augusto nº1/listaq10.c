#include <stdio.h>

int main(){
    char num[19];
    int qtnumeros;

    printf("insira uma sequencia de numeros e separe os por espacos:\n");
    fgets(num, 19, stdin); 

    for (int i = 0; i < 20; i++){
        if (num[i] == " " && num[i+1] != " "){
            qtnumeros++;
        }
    }
    printf("%d", qtnumeros);
}

//questao 10 (incompleta)