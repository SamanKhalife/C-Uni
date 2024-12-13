#include <stdio.h>
int main()
{
    int i, n;
    long int f = 1;

    printf("\nEnter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        f *= i;

    printf("%d != %ld", n, f);
    getch();
    return (0);
}