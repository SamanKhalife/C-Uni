#include <stdio.h>
int main()
{
  float a, b, c, t;
  printf("\nEnter a,b,c: ");
  scanf("%f%f%f", &a, &b, &c);
  if (a > b)
  {
    t = b;
    b = a;
    a = t;
  }
  if (a > c)
  {
    t = c;
    c = a;
    a = t;
  }
  if (b > c)
  {
    t = c;
    c = b;
    b = t;
  }
  Printf("%d %d %d", a, b, c);
  getch();
  return (0);
}