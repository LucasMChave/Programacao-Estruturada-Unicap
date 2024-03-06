#include <stdio.h>

int main(){
    int n;

    printf("Insira um numero: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0){
        printf("divisivel por ambos 3 e 5");
    }
    else{
        printf("Não divisivel por ambos");
    }
}
// questao 14