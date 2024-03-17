#include <stdio.h>

int lista(int n){
    printf("|%d| ", n);
    if (n == 0){
        return 0;
    }
    else{
        return lista(n-1);
    }
}

int main(){
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);
    lista(n);
}
//questao 05