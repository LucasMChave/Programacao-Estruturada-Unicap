#include <stdio.h>

int fibbo(int n){
    if (n == 0 || n == 1){
        return n;
    }
    else{
        return fibbo(n-1) + fibbo(n-2);
    }
}

int main(){
    int n;

    printf("Digite quantos termos da sequencia de fibonacci planejas ver: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 0; n--){
        printf("|%d| ", fibbo(n-1));
    }
}
//questao 03