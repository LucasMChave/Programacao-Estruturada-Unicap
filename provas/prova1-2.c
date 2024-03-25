/*Implemente a função h definida recursivamente por (peso 3,0):
h(m,n) = m+1, se n = 1
h(m,n) = n+1, se m = 1
h(m,n) = h(m,n-1)+h(m-1,n), se m>1,n>1*/

#include <stdio.h>

int h(int m, int n){
    if(n > 1 && m > 1){
        printf("----------\n");
        printf("M = %d\n", m);
        printf("N = %d\n", n);
        return h(m, n-1) + h(m-1, n);
    }
    else if(m == 1){
        printf("----------\n");
        printf("M = %d\n", m);
        return m+1;
    }
    else if (n == 1){
        printf("----------\n");
        printf("N = %d\n", n);
        return n+1;
    }
    else{
        return -1;
    }
}

int main(){
    int n1, n2;

    printf("Insira os valores\nn1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);

    int fin = h(n1,n2);
    if (fin  == -1){
        printf("Valores incompativeis");
    }
    else{
        printf("resultado: %d", fin);
    }
}

//Questão 02