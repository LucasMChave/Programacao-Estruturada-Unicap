#include <stdio.h>
#include <string.h>

struct cadastro{
    char name[50];
    int age;
};

int main(){
    struct cadastro cadastro2;

    cadastro2.age = 21;
    strcpy(cadastro2.name, "Lucas");

    printf("%s idade %d", cadastro2.name, cadastro2.age);
}