#include <stdio.h>

int main(){
    char c, *pc;

    c = 'a';
    pc = &c;

    printf("Endereco de 'c' = %p, e seu valor: %c\n", &c, c);
    printf("A variavel 'pc' armazena o valor: %c, no endereco: %p\n", *pc, pc);
    printf("O ponteiro 'pc' tem o endereco: %p\n", &pc);

    return 0;
}
//questao 01