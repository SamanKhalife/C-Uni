#include <stdio.h>
int main()
{
    int a, b, c;
    a = 0;
    b = 1;
    while (b <= 10000)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n%d ", a);
    getch();
    return (0);
}