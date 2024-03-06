#include <stdio.h>

int main(){
    int n = 1, loop = 0, pval, uval, npar = 0, nimpar = 0;

    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            uval = n;
            break;
        }
        if (loop == 0){
            pval = n;
        }
    }

    if (uval > pval){
        for (int i = pval+1; i < uval-1; i++){
            if (i % 2 == 0){
                npar++;
            }
            else{
                nimpar++;
            }
        }
    }
    else{
        for (int i = uval+1; i < pval-1; i++){
            if (i % 2 == 0){
                npar++;
            }
            else{
                nimpar++;
            }
        }
    }
    printf("Existem %d numeros pares e %d numeros impares entre o primeiro e ultimo valor", nimpar, npar);
}

//questao 24