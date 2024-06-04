#include <stdio.h>

int main(){
    int n = 1;
    char tex;
    FILE *arq;

    arq = fopen("arq.txt", "a+");
    fclose(arq);
    while (n != 0){
        printf("Insira caracteres no texto: ");
        scanf("%c", &tex);
        fflush(stdin);
        arq = fopen("arq.txt", "a+");
        fprintf(arq, "%c\n", tex);
        if (tex == '0'){
            n = 0;
        }
        fclose(arq);
    }
}

//q1