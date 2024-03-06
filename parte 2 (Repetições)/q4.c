#include <stdio.h>

int main(){
    float alt[4], altmedia;
    printf("Insira a altura dos membros do seu grupo (em cm)\n");
    for (int i = 0; i < 5; i++){
        printf("Membro %d: ", i+1);
        scanf("%f", &alt[i]);
    }

    altmedia = (alt[0] + alt[1] + alt[2] + alt[3] + alt[4])/5;

    printf("Media do grupo: %0.2fcms", altmedia);
}
//questao 04