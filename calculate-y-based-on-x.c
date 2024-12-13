#include <stdio.h>
int main()
{
    float x, y;
    printf("\n x = ");
    scanf("%f", &x);
    y = (x > 20) ? -4 * x * x + 3 : 3 * x - 7;
    printf("y=%-7.1f\n", y);
    getchar();
    return (0);
}