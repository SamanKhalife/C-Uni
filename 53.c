#include<stdio.h>
#include<math.h>

int main() {
  int i;
  float r;
  printf("\n cos   sin   tg   ctg");
  for (i = 1; i <= 89; i++) {
    r = 3.14 / 180 * i;
    printf("\n%2d %8.4lf   %5.4lf   %5.4lf  %5.4lf", i, cos(i / 90.0), sin(i / 90.0), tan(i / 90.0), 1 / tan(i / 90.0));
    if (i % 20 == 0)
      getch();
  }
  getch();
  return (0);
}