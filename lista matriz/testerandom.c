#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 10;
    int i;
    srand((unsigned)time(NULL));
    for(i = 0; i < MAX; i++)
        printf("Elemento %d = %d\n", i, rand()%MAX);
    return 0;
}