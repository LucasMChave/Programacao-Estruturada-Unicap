#include <stdio.h>
#include <string.h>

struct horario{
    int hor;
    int min;
    int sec;
};

struct data{
    int dia;
    int mes;
    int ano;
};

struct compromisso{
    char desc[100];
    struct horario hor_role;
    struct data dia_role;
};


int main(){
    struct compromisso role;


    printf("Insira o compromisso que está planejando, e além disso, a data e horario que irá acontecer\n");
    fgets(role.desc, 100, stdin);
    fflush(stdin);
    int lim = strlen(role.desc);
    role.desc[lim-1] = '\0';
    printf("Dia: ");
    scanf("%d", &role.dia_role.dia);
    printf("Mes: ");
    scanf("%d", &role.dia_role.mes);
    printf("Ano: ");
    scanf("%d", &role.dia_role.ano);
    printf("Horario: ");
    scanf("%d", &role.hor_role.hor);
    printf("Minuto: ");
    scanf("%d",  &role.hor_role.min);
    printf("Segundo: ");
    scanf("%d", &role.hor_role.sec);

    printf("No dia %d/%d/%d as %d:%d:%d iremos te avisar de seu compromisso", role.dia_role.dia, role.dia_role.mes, role.dia_role.ano, role.hor_role.hor, role.hor_role.min, role.hor_role.sec);
    

    return 0;
}

//q1