#include <stdio.h>

int main(){
    int inp, beg = 1;
    float n1, n2, nr;

    while (beg == 1){
        printf("Digite 2 numeros e insira qual dos calculos deseja realizar:\n");
        printf("1 Numero: ");
        scanf("%f", &n1);
        printf("2 Numero: ");
        scanf("%f", &n2);
        printf("\nOperacoes:\n 1> (+) Adicao\n 2> (-) Subtracao\n 3> (*) Multiplicacao\n 4> (/) Divisao\nQual deseja fazer? ");
        scanf("%d", &inp);
        switch(inp){
            case 1:
                nr = n1 + n2;
                printf("Resultado: %f\n",nr);
                break;
            case 2:
                nr = n1 - n2;
                printf("Resultado: %f\n",nr);
                break;
            case 3: 
                nr = n1 * n2;
                printf("Resultado: %f\n",nr);
                break;
            case 4:
                nr = n1 / n2;
                printf("Resultado: %f\n",nr);
                break;
            default:
                printf("Operacao invalida\n");
        }
        printf("\ndeseja continuar a usar a calculadora??\n 1 = SIM\n 0 = NAO\n");
        scanf("%d", &beg);
    }
    printf("Desligando...");
}
//questao 21