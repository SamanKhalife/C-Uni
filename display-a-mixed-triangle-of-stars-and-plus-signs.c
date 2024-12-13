#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\nEnter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            for (j = 1; j <= i; j++)
                printf("+");
        else
            for (j = 1; j <= i; j++)
                printf("*");
        printf("\n");
    }
    getch();
    return (0);
}