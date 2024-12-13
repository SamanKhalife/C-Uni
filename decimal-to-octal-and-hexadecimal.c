#include <stdio.h>
int main()
{
    int x;
    printf("\n Enter x:");
    scanf("%d", &x);
    printf("%d base 10 equal to %o base 8\n", x, x);
    printf("d base 10 equal to %x base 16\n", x, x);
    getch();
    return (0);
}