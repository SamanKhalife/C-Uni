#include <stdio.h>
int main()
{
    int n, i, j;
    printf("\nEnter n:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf(" ");
        for (j = 1; j <= i; j++)
            printf("%3d", j);
        for (j = i - 1; j >= 1; j--)
            printf("%3d", j);
        printf("\n");
    }
    getch();
    return (0);
}