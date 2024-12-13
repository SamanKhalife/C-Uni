#include <stdio.h>
int main()
{
    int n, d;
    printf("\n Enter :");
    scanf("%d", &n);
    if ((n >= 1) && (n <= 6))
    {
        d = 31;
        printf("Day = %d", d);
    }
    else if ((n >= 7) && (n < 12))
    {
        +d = 30;
        printf("Day =%d", d);
    }
    else if (n == 12)
    {
        d = 29;
        printf("Day=%d", d);
    }
    else
        printf("Month number is out of range");
    getch();
    return (0);
}