#include <stdio.h>
int main () {

    int x;
    printf("Insert an integer number\n");
    scanf("%d", &x);
    for(int i = 0; i <= x; i = i + 1)
        {
            printf("%d\n", i);
    } 
}