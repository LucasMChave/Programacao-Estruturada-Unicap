#include <stdio.h>

struct Aniversario{
    int dia;
    int mes;
};

struct Contato{
    char nome[20];
    char tel[12];
    struct Aniversario niver;
};

int main(){
    struct Contato lista[10];
    FILE *arq;
    int opc = -1, qtc = 0;
    char c, busca, buscn[20];

    arq = fopen("ListaCont","rb");
    if (arq == NULL){
        arq = fopen("ListaCont", "w+b");
        fprintf(arq, "Lista de Contatos:\n");
        fclose(arq);    
    }
    fclose(arq);

    while (opc != 0){
        printf("1- inserir contato\n2- remover contato\n3- pesquisar contato\n4- listar todos contatos\n5- listar contatos com dada letra\n6- listar aniversariantes do mês\n0- Encerrar\n\n");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                printf("nome: ");
                scanf(" %20[^\n]", lista[qtc].nome);
                printf("telefone: ");
                scanf(" %12[^\n]", lista[qtc].tel);
                printf("dia de aniversario: ");
                scanf("%d", &lista[qtc].niver.dia);
                printf("mes de aniversario: ");
                scanf("%d", &lista[qtc].niver.mes);
                printf("\n");
                arq = fopen("ListaCont","wb");
                fprintf(arq, "Nome %d: %s\nTel %d: %s\nAniversario %d: %d/%d\n\n", lista[qtc].nome, lista[qtc].tel, lista[qtc].niver.dia, lista[qtc].niver.mes);
                fclose(arq);
                qtc++;
                break;
            case 2:
                for(int i = 0; i < 20; i++){
                    lista[qtc].nome[i] = '\0';
                    lista[qtc].tel[i] = '\0';
                }
                lista[qtc].niver.dia = 0;
                lista[qtc].niver.mes = 0;
                qtc--;
                printf("\n");
                break;
            case 3:
                break;
            case 4:
                arq = fopen("ListaCont","r+b");
                while (c != EOF){
                    c = fgetc(arq);
                    printf("%c", c);
                }
                fclose(arq);
                c = ' ';
                break;
            case 5:
                printf("insira a letra de busca: ");
                scanf("%c", &busca);
                fflush(stdin);
                break;
            default:
                printf("Encerrando programa...");
                break;
        }
    }
    return 0;
}

//q9