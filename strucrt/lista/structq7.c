#include <stdio.h>

struct data{
    int dia;
    int mes;
    int ano;
};

struct Funcionario{
    char nome[20];
    char gen;
    int idade;
    int CPF;
    struct data d_nasc;
    int CdS;
    char cargo[30];
    float sal;
};

int main(){
    struct Funcionario emp;

    printf("Insira suas informações pessoais\n");
    printf("Nome: ");
    scanf(" %20[^\n]", emp.nome);
    printf("Genero:\n1-Masculino\n2-Feminino\n3-Outro\n0-Prefiro não identificar\n");
    int opc;
    scanf("%d", &opc);
    if (opc == 1){
        emp.gen = 'M';
    }
    else if(opc == 2){
        emp.gen = 'F';
    }
    else if(opc == 3){
        emp.gen = 'N';
    }
    else{
        emp.gen = '\0';
    }
    printf("Data de nascimento\nDia: ");
    scanf("%d", &emp.d_nasc.dia);
    printf("Mes: ");
    scanf("%d", &emp.d_nasc.mes);
    printf("Ano: ");
    scanf("%d", &emp.d_nasc.ano);

    emp.idade = 2024 - emp.d_nasc.ano;

    printf("CPF: ");
    scanf("%d", &emp.CPF);
    printf("Codigo de Setor (0-99): ");
    scanf("%d", &emp.CdS);
    while (emp.CdS < 0 || emp.CdS > 100){
        printf("Digite um codigo valido!: ");
        scanf("%d", &emp.CdS);
    }
    printf("Ocupação atual: ");
    scanf(" %30[^\n]", emp.cargo);
    printf("Salario: R$");
    scanf("%f", &emp.sal);

    if (emp.gen == 'M'){
        printf("O usuario de nome %s tem %d anos de idade, trabalha como %s por R$%.2f reais por mes, no setor %d", emp.nome, emp.idade, emp.cargo, emp.sal, emp.CdS);
    }
    else if(emp.gen == 'F'){
        printf("A usuaria de nome %s tem %d anos de idade, trabalha como %s por R$%.2f reais por mes, no setor %d", emp.nome, emp.idade, emp.cargo, emp.sal, emp.CdS);
    }
    else{
        printf("Usuario de nome %s tem %d anos de idade, trabalha como %s por R$%.2f reais por mes, no setor %d", emp.nome, emp.idade, emp.cargo, emp.sal, emp.CdS);
    }

    return 0;
}

//q7