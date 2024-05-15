#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int n, opc = -1;

    printf("Insira um valor inicial: ");
    scanf ("%d", &n);

    int * memo = (int*)calloc(n, sizeof(int));

    while (opc != 0){
        printf("Escolha uma das opcoes abaixo\n1- Inserir valor em uma posicao\n2- Verificar o valor de uma posicao\n0- Finalizar programa\n");
        scanf("%d", &opc);
        switch(opc){
        case 1:
            int i, val = 0;
            printf("Insira um valor novo e a posicao onde ele vai ser colocado na memoria:\n");
            scanf("%d", &val);
            scanf("%d", &i);
            while (i > n){
                printf("Posicao invalida, insira uma diferente");
                scanf("%d", &i);
            }
            memo[i] = val;
            printf("Alocado com sucesso");
            printf("\n");
            break;
        case 2:
            int j;
            printf("Qual bit da memoria quieres verificas?\n");
            scanf("%d", &j);
            while (j > n){
                printf("Posicao invalida, insira uma diferente");
                scanf("%d", &j);
            }
            printf("%d", memo[j]);
            printf("\n");
            break;
        case 0:
            printf("Finalizando programa");
            break;
        default:
        }
    }

    free(memo);
    memo = NULL;
}

// q6