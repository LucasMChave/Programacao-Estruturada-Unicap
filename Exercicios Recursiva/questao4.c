#include <stdio.h>

int lista(int n, int in){
    printf("|%d| ", in);
    if (in < n){
        return lista(n, in+1);
    }
    else{
        return n;
    }
}

int main(){
    int n, n2 = 0;

    printf("Insira um numero: ");
    scanf("%d", &n);
    lista(n, n2);
}
//questao 04