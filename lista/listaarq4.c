#include <stdio.h>

int main(){
    FILE *arq;
    char tex[50], busca;
    int cbus = 0;

    printf("Insire um texto: ");
    scanf("%50[^\n]", tex);
    fflush(stdin);
    printf("Insira um caractere de busca: ");
    scanf("%c", &busca);

    arq = fopen("caractere.txt", "w");
    for (int i = 0; i < sizeof(tex); i++){
        if (tex[i] == busca){
            cbus++;
        }
    }
    fprintf(arq, "%s\nCaractere buscado: %d", &tex, cbus);
    fclose(arq);
}

//q4