#include <stdio.h>
int main()
{
    int n, i, count;
    printf("\nEnter n : ");
    scanf("%d", &n);
    for (count = 0, i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    if (count == 2)
        printf("%d is prime.", n);
    else
        printf("%d is not prime", n);
    getch();
    return (0);
}