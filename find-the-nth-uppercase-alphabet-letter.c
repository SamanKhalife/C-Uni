#include <stdio.h>
int main()
{
    int n;
    char ch1, ch2;
    printf("\n Enter n :");
    scanf("%d", &n);
    ch1 = 'A' + n - 1;
    printf(" %dth char of alphabet is %c ", n, ch1);
    getch();
    return (0);
}