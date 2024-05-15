#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
    char *str = malloc(1 *sizeof(char));

    printf("Insira uma palavra\n");
    fgets(str, 15, stdin);

    for (int i = 0; i < 15; i++){
        str[i] = tolower(str[i]);
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            str[i] = '_';    
        }
    }
    printf("%s", str);

    free(str);
    str = NULL;
}

// q4