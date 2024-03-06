#include <stdio.h>

int main(){
    int x, z;
    float y;

    scanf("%d", &x);
    scanf("%f", &y);
    printf("%d %f", x, y);

    scanf("%d%f", &x, &y);
    printf("%d %f", x, y);

    scanf("%d%d", &x, &z);
    printf("%d %d", x, z);

    scanf("%d %d", &x, &z);
    printf("%d %f %d", x, y, z);

    return 0;
}

//questao 02