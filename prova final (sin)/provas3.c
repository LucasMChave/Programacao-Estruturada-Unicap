#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Localizacao{
    char n_predio[30];
    int nsala;
};

struct Palest{
    char nome_p[20];
    char inst[20];
};

struct Conf{
    char nome[30];
    char area[20];
    char data[10]; 
    int ddias;
    int npal;
    struct Localizacao local;
    struct Palest pals[4];
};

int main(){
    struct Conf *ptr = malloc(3 * sizeof(struct Conf));
    struct Conf lista_Conf;

    *ptr = lista_Conf;

    int opc = -1, nconf = 0;
    char prediobusca[30], confbusca[30];

    if (ptr == NULL){
        printf("Falha na alocação de memoria\n");
    }

    printf("Conferencias Unicap\n\n");
    while (opc != 6){    
        printf("Insira uma opcao:\n1- Adicionar uma nova conferencia\n2- Remover Conferencia\n3- Buscar Conferencia p/ Predio\n4- Alocar Memoria\n5- Imprimir conferencias\n6- Finalizar Programa\n");
        scanf("%d", &opc);
        printf("\n");
        switch(opc){
            case 1:
                if (nconf == sizeof(&ptr)){
                    printf("Lotado, aumente o maximo de conferencias com a opção 4.");
                    break;
                }
                printf("Nome da conferencia: ");
                scanf(" %30[^\n]", ptr[nconf].nome);
                printf("Area de estudo: ");
                scanf(" %20[^\n]", ptr[nconf].area);
                printf("Data da conferencia: ");
                scanf(" %10[^\n]", ptr[nconf].data);
                printf("Duracao em dias: ");
                scanf("%d", &ptr[nconf].ddias);
                printf("Local do Evento:\nPredio: ");
                scanf(" %30[^\n]", ptr[nconf].local.n_predio);
                printf("Numero da sala: ");
                scanf("%d", &ptr[nconf].local.nsala);
                printf("Insira o numero de palestrantes (Maximo de 4): ");
                scanf("%d", &ptr[nconf].npal);
                while (ptr[nconf].npal > 4){
                    printf("Insira um numero valido: ");
                    scanf("%d", &ptr[nconf].npal);
                }
                for (int i = 0; i < ptr[nconf].npal; i++){
                    printf("Palestrante %d: ", i+1);
                    scanf(" %20[^\n]", ptr[nconf].pals[i].nome_p);
                    printf("Sua instituicao: ");
                    scanf(" %20[^\n]", ptr[nconf].pals[i].inst);
                }
                nconf++;
                printf("\n");
                break;
            case 2:
                printf("Insira a conferencia que quer remover: ");
                scanf(" %29[^\n]", confbusca);
                for (int i = 0; i == nconf; i++){
                    if (strcmp(confbusca, ptr[i].nome) == 0){
                        for (int j  = 0; j < 30; j++){
                            ptr[nconf].nome[j] = '0';
                            ptr[nconf].area[j] = '0';
                            ptr[nconf].data[j] = '0';
                            ptr[nconf].local.n_predio[j] = '0';
                            for (int k = 0; k < 30; k++){
                                ptr[nconf].pals[k].nome_p[j] = '0';
                                ptr[nconf].pals[k].inst[j] = '0';
                            }
                        }
                        ptr[nconf].ddias = 0;
                        ptr[nconf].local.nsala = 0;
                        ptr[nconf].npal = 0;
                    }
                }
                printf("\n");
                nconf--;
                break;
            case 3:
                printf("Insira o precio q busca: ");
                scanf(" %29[^\n]", prediobusca);
                for (int i = 0; i == nconf; i++){
                    if (strcmp(prediobusca, ptr[i].local.n_predio) == 0){
                        printf("Conferencia: %s\n", ptr[i].nome);
                    }
                }
                printf("\n");
                break;
            case 4:
                realloc(ptr, 3 * sizeof(struct Conf));
                printf("Mais 3 reservas foram criadas para palestras");
                printf("\n");
                break;
            case 5:
                for (int i = 0; i < nconf; i++){
                    printf("A P6alestra %s, acontecera no predio %s sala %d, comecando dia %s e durando %d dias, contando com palestras de:\n", ptr[i].nome, ptr[i].local.n_predio, ptr[i].local.nsala, ptr[i].data, ptr[i].ddias);
                    for (int j = 0; j < ptr[i].npal; j++){
                        printf("Palestrante %s, da instituicao %s;\n", ptr[i].pals[j].nome_p, ptr[i].pals[j].inst);
                    }
                    printf("\n");
                }
                printf("\n");
                break;
            case 6:
                printf("Encerrando Programa...");
                break;
            default:
                printf("Insira uma opção na tela!\n");
                scanf("%d", &opc);
        }
    }

    free(ptr);
    return 0;
}