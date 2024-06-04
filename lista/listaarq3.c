#include <stdio.h>

int main(){
    FILE *arq;
    char tex[50];
    int vog = 0;

    printf("Insire um texto: ");
    scanf("%50[^\n]", tex);

    arq = fopen("vogal.txt", "w");
    for (int i = 0; i < sizeof(tex); i++){
        if (tex[i] == 'a' || tex[i] == 'e' || tex[i] == 'i' || tex[i] == 'o' || tex[i] == 'u' || tex[i] == 'A' || tex[i] == 'E' || tex[i] == 'I' || tex[i] == 'O' || tex[i] == 'U'){
            vog++;
        }
    }
    fprintf(arq, "%s\nVogais: %d", &tex, vog);
    fclose(arq);
}

//q3