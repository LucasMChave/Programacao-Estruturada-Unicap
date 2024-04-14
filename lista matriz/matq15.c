#include <stdio.h>

questionario(int gabaluno[5][10]){
    int resp;

    printf("1. Qual é a capital da Austrália?\n");
    printf("0) Sydney\n");
    printf("1) Melbourne\n");
    printf("2) Brisbane\n");
    printf("3) Perth\n");
    printf("4) Canberra\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][0] = 1;
    //Resposta: e) Canberra

    printf("2. Qual é o maior planeta do Sistema Solar em termos de diâmetro?\n");
    printf("0) Júpiter\n");
    printf("1) Saturno\n");
    printf("2) Urano\n");
    printf("3) Terra\n");
    printf("4) Netuno\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][1] = 1;
    //Resposta: a) Júpiter

    printf("3. Quem é o autor do famoso romance 'Dom Quixote?'\n");
    printf("0) William Shakespeare\n");
    printf("1) Miguel de Cervantes\n");
    printf("2) Charles Dickens\n");
    printf("3) Leo Tolstoy\n");
    printf("4) Jane Austen\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][2] = 1;
    //Resposta: b) Miguel de Cervantes

    printf("4. Qual é o metal mais abundante na crosta terrestre?\n");
    printf("0) Ouro\n");
    printf("1) Ferro\n");
    printf("2) Alumínio\n");
    printf("3) Cobre\n");
    printf("4) Chumbo\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][3] = 1;
    //Resposta: c) Alumínio

    printf("5. Qual é o número atômico do carbono?\n");
    printf("0) 6\n");
    printf("1) 12\n");
    printf("2) 14\n");
    printf("3) 16\n");
    printf("4) 20\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][4] = 1;
    //Resposta: a) 6

    printf("6. Quem foi o primeiro presidente dos Estados Unidos?\n");
    printf("0) Thomas Jefferson\n");
    printf("1) George Washington\n");
    printf("2) Abraham Lincoln\n");
    printf("3) John Adams\n");
    printf("4) Benjamin Franklin\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][5] = 1;
    //Resposta: b) George Washington

    printf("7. Qual é o nome do instrumento usado para medir a pressão arterial?\n");
    printf("0) Esfigmomanômetro\n");
    printf("1) Estetoscópio\n");
    printf("2) Termômetro\n");
    printf("3) Microscópio\n");
    printf("4) Barômetro\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][6] = 1;
    //Resposta: a) Esfigmomanômetro

    printf("8. Qual é o maior deserto do mundo?\n");
    printf("0) Deserto do Saara\n");
    printf("1) Deserto da Arábia\n");
    printf("2) Deserto do Atacama\n");
    printf("3) Deserto de Gobi\n");
    printf("4) Deserto da Antártida\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][7] = 1;
    //Resposta: a) Deserto do Saara

    printf("9. Quem pintou a Mona Lisa?\n");
    printf("0) Michelangelo\n");
    printf("1) Leonardo da Vinci\n");
    printf("2) Vincent van Gogh\n");
    printf("3) Pablo Picasso\n");
    printf("4) Rembrandt\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][9] = 1;
    //Resposta: b) Leonardo da Vinci

    printf("10. Qual é o maior oceano do mundo em área?\n");
    printf("0) Oceano Atlântico\n");
    printf("1) Oceano Índico\n");
    printf("2) Oceano Ártico\n");
    printf("3) Oceano Pacífico\n");
    printf("4) Oceano Antártico\n");
    printf("Resposta: ");
    scanf("%d", &resp);
    printf("\n");
    gabaluno[resp][9] = 1;
    //Resposta: d) Oceano Pacífico
    return;
} 

void compararresp(int resp[5][10], int aluno[5][10]){
    int acertos = 0;
    if (resp[4][0] == aluno[4][0]){
        acertos++;
    }
    if (resp[0][1] == aluno[0][1]){
        acertos++;
    }
    if (resp[1][2] == aluno[1][2]){
        acertos++;
    }
    if (resp[2][3] == aluno[2][3]){
        acertos++;
    }
    if (resp[0][4] == aluno[0][4]){
        acertos++;
    }
    if (resp[1][5] == aluno[1][5]){
        acertos++;
    }
    if (resp[0][6] == aluno[0][6]){
        acertos++;
    }
    if (resp[0][7] == aluno[0][7]){
        acertos++;
    }
    if (resp[1][8] == aluno[1][8]){
        acertos++;
    }
    if (resp[3][9] == aluno[3][9]){
        acertos++;
    }
    printf("recebeu %d pontos!\n", acertos);
    return;
}


int main(){
    int gabarito[5][10] = {0}, aluno1[5][10] = {0}, aluno2[5][10] = {0}, aluno3[5][10] = {0}, aluno4[5][10] = {0}, aluno5[5][10] = {0};

    gabarito[4][0] = 1;
    gabarito[0][1] = 1;
    gabarito[1][2] = 1;
    gabarito[2][3] = 1;
    gabarito[0][4] = 1;
    gabarito[1][5] = 1;
    gabarito[0][6] = 1;
    gabarito[0][7] = 1;
    gabarito[1][8] = 1;
    gabarito[3][9] = 1;

    printf("ATIVIDADE GERAL DE MULTIPLA ESCOLHA:\n");
    printf("Cada aluno ira fazer a prova um de cada vez\n");
    printf("ALUNO 1:\n");
    questionario(aluno1);
    printf("ALUNO 2:\n");
    questionario(aluno2);
    printf("ALUNO 3:\n");
    questionario(aluno3);
    printf("ALUNO 4:\n");
    questionario(aluno4);
    printf("ALUNO 5:\n");
    questionario(aluno5);

    printf("\nRESULTADOS:");
    printf("O aluno 1 ");
    compararresp(gabarito, aluno1);
    printf("O aluno 2 ");
    compararresp(gabarito, aluno2);
    printf("O aluno 3 ");
    compararresp(gabarito, aluno3);
    printf("O aluno 4 ");
    compararresp(gabarito, aluno4);
    printf("O aluno 5 ");
    compararresp(gabarito, aluno5);
    printf("\n");

    printf("GABARITO DAS RESPOSTAS:\n");
    for (int k = 0; k < 5; k++){
        for (int h = 0; h < 10; h++){
            printf("%d.%d)", h+1, k);
            if (gabarito[k][h] == 0){
                printf("   ");
            }
            else{
                printf("X  ");
            }
        }
    printf("\n");
    }
}

//questao 15
