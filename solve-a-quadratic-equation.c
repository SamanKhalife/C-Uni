#include <stdio.h>
#include <math.h>
int main()
{
  float a, b, c, delta, x1, x2;
  printf("\nEnter a,b,c: ");
  scanf("%f%f%f", &a, &b, &c);
  delta = b * b - 4 * a * c;
  if (delta < 0)
    printf("No Real Root!");
  else if (delta == 0)
  {
    x1 = -b / (2 * a);
    printf("x1=x2=%f", x1);
  }
  else
  {
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    printf("x1=%f\tx2=%f", x1, x2);
  }
  getch();
  return (0);
}
