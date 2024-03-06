#include <stdio.h>

int main(){
    int notas[4], app = 0;

    printf("Insira as notas dos alunos\n");
    for (int i = 0; i < 5; i++){
        printf("Aluno %d: ", i+1);
        scanf("%d", &notas[i]);
        if (notas[i] >= 7){
            app++;
        }
    }
    printf("Tivemos %d alunos aprovados", app);
}

//questao 01