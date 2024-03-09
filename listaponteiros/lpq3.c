 #include <stdio.h>

 int main(){
    int n1, n2, *pt1, *pt2;

    pt1 = &n1;
    pt2 = &n2;

    printf("Insira 2 numeros inteiros:\n");
    scanf("%d %d", &n1, &n2);

    printf("O numero %d, ocupa o endereco de memoria %p, e o numero %d ocupa o endereco %p\n", n1, pt1, n2, pt2);

    return 0;
}
//questao 03