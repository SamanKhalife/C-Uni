#include <stdio.h>
int main()
{
    int x, y, z;
    printf("\n Enter x,y:");
    scanf("%d%d", &x, &y);
    z = x >= 0 ? (y >= 0) ? x + y : x - y : (y >= 0) ? y - x
                                                     : -y - x;
    printf(" |%d| +|%d| =%d ", x, y, z);
    getch();
    return (0);
}