#include <stdio.h>
int main()
{

    int x;
    int j;
    int k;
    int i;

    printf("\n\n\nGeben Sie bitte 3 natürliche Zahlen ein, die ein Intervall angeben.\n\n");
    printf("Die erste Zahl bildet die untere Schranke, die zweite die obere.\n\n");
    printf("Es werden die Zahlen in Ihrem Intervall (int1,int2) auf Teilbarkeit mit Ihrer dritten Zahl geprüft. \n\n");
    printf("Beachten Sie, nach ihrer Zahl 'ENTER' zu dürcken\n\n\n\n");
    scanf("%d", &i);
    scanf("%d", &j);
    scanf("%d", &k);
    for (int i; i <= j; i = i + 1)
    {
        printf("%d\n", i);
    }
    return 0;
}