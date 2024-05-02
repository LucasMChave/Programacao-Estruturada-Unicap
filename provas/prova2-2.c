#include <stdio.h>
#include <string.h>

void criarmat(char str[51], int strmat[5][3], int lim){
    int i = 0;
    for (int l = 0; l < lim; l++){
        if (str[l] == ' '){
            i++;
        }
        if ((str[l] >= 65 && str[l] <= 90)||(str[l] >= 92 && str[l] <= 122)){
            if (str[l] == 'a' || str[l] == 'e' || str[l] == 'i' || str[l] == 'o' || str[l] == 'u' || str[l] == 'A' || str[l] == 'E' || str[l] == 'I' || str[l] == 'O' || str[l] == 'U'){
                strmat[i][0] += 1;
                strmat[i][2] += 1;
            }
            else{
                strmat[i][1] += 1;
                strmat[i][2] += 1;
            }
        }
    }
}

void exibirmat(int mat[5][3]){
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 3; j++){
            printf("[%d]", mat[i][j]);
        }
    printf("\n");
    }
}

void somamat(int mat[5][3]){
    int soma = 0;
    char asciisoma;

    for (int i = 0; i < 5; i++){
        soma += mat[i][2];
    }

    asciisoma = soma;

    printf("O digito em ASCII que representa a soma das vogais e concoantes: %c\n", asciisoma);
}

void substituirvalores(char str[51]){
    for (int i = 0; i < 50; i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] -= 32;
        }
    }
    printf("Nova frase: %s\n", str);
}

int main(){
    char msg[51];
    int opc = -1, tam, matw[5][3] = {0};

    while (opc != 0){
        printf("MENU\n1- Inserir frase\n2- Realizar analize\n3- Exibir matriz\n4- Mostrar caractere representado pela soma das vogais e concoantes\n5- Apagar valores\n6- Substituir minustulo pra maiusculo\n0- Finalizar programa\n\nInsira sua opcao: ");
        printf("\n");
        scanf("%d", &opc);
        switch(opc){
            case 1:
                printf("Digite sua frase: ");
                getchar();
                fgets(msg, 51, stdin);
                fflush(stdin);
                printf("\n");
                break;
            case 2:
                tam = (strlen(msg) + 1); 
                criarmat(msg, matw, tam);
                printf("Matriz criada\n");
                break;
            case 3:
                exibirmat(matw);
                break;
            case 4:
                somamat(matw);
                break;
            case 5:
                for (int i = 0; i < 51; i++){
                    msg[i] = '\0';
                }
                for (int k = 0; k < 5; k++){
                    for (int h = 0; h < 3; h++){
                        matw[k][h] = 0;
                    }
                }
                printf("Frase e matriz apagadas com sucesso\n");
                break;
            case 6:
                substituirvalores(msg);
                break;
            case 0:
                printf("Encerrando programa...");
                break;
            default:
                printf("Insira uma opcao valida\n");
                break;
        }
    }
}
