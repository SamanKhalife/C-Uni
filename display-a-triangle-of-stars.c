#include <stdio.h>
int main()
{
    int i, j;
    printf("\n");

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    getch();
    return (0);
}