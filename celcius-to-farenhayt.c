#include <stdio.h>
int main()
{
    int c;
    float f;
    printf("\nTemprature ('c):");
    scanf("%d", &c);

    f = c * 1.8 + 32;

    printf("%d 'c = %-5.1f Farenhayt\n", c, f);
    getchar();
    return 0;
}
