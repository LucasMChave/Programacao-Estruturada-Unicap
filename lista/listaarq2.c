#include <stdio.h>

int main(){
    FILE *arq;
    char tex[50];
    int lin;

    printf("Insire um texto: ");
    scanf("%50[^\n]", tex);

    arq = fopen("qtlin.txt", "w");
    for (int i = 0; i < sizeof(tex); i++){
        if (tex[i] == '\0'){
            lin = i/10;
            break;
        }
    }
    fprintf(arq, "%s\nLinhas: %d", &tex, lin);
    fclose(arq);
}

//q2