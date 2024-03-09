#include <stdio.h>

void invertervalor(int *A, int *B){
    int temp = 0;

    temp = *A;
    *A = *B;
    *B = temp;
}

int main(){
    int n1, n2;

    printf("Insira 2 numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    invertervalor(&n1,&n2);

    printf("Valor de A = %d, Valor de B = %d\n", n1, n2);

    return 0;
}
//questao 04