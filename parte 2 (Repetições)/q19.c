#include <stdio.h>

int main(){
    int n = 1, div2 = 0, div3 = 0, div5 = 0;
    while (n != 0){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        if (n % 2 == 0){
            div2++;
        }
        if (n % 3 == 0){
            div3++;
        }
        if (n % 5 == 0){
            div5++;
        }
    }
    printf("|%d numeros divisiveis por 2|", div2);
    printf("|%d numeros divisiveis por 3|", div3);
    printf("|%d numeros divisiveis por 5|", div5);
}

//questao 19