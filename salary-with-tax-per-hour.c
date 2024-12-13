#include <stdio.h>
int main()
{
    float d, h, w, m;
    printf("\nEnter Houres and base:");
    scanf("%f%f", &h, &d);
    w = h * d;
    m = (w < 16000) ? 0 : 0.1 * (w - 16000);
    printf("payment =%7.1f \n ", w - m);
    getchar();
    return 0;
}
