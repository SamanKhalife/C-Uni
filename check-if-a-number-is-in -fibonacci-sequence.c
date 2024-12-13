#include <stdio.h>
int main()
{
    int a, b, c, n;
    printf("\nEnter n:");
    scanf("%d", &n);
    a = 0;
    b = 1;
    while (b < n)
    {
        c = a + b;
        a = b;
        b = c;
    }
    if (b == n)
        printf("%d is in this seri", n);
    else
        printf("%d is not in this seri", n);
    getch();
    return (0);
}