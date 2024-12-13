#include <stdio.h>
int main()
{
    int n, week, day;
    printf("\nEnter n:");
    scanf("%d", &n);
    week = (n - 1) / 7 + 1;
    day = (n - 1) % 7 + 1;
    printf("day = %d\tweek=%d", day, week);
    getch();
    return (0);
}