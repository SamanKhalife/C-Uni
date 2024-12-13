#include <stdio.h>

int main()
{
    int a, b, c;
    printf("\nEnter a:");
    scanf("%d", &a);
    printf("\nEnter b:");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;

    printf("a = %d \n b = %d \n", a, b);
    getchar();
    return 0;
}
