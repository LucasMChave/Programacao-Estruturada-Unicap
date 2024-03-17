#include <stdio.h>

int fatorial(int n){
    if (n == 0){
        return 1;
    }
    else{
        int i, f = 1;
        for(i = 2; i <= n; i++){
            f = f * i;
        }
        return f;
    }
}

int main(){
    int n;

    scanf("%d", &n);
    printf("%d", fatorial(n));
}
//questao 02