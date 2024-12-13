#include <stdio.h>
int main()
{
    int i, a, b, c;
    a = b = 1;
    printf("\n%4d%4d", a, b);
    for (i = 3; i <= 15; i++)
    {
        c = a + b;
        printf("%4d", c);
        a = b;
        b = c;
    }
    getch();
    return (0);
}