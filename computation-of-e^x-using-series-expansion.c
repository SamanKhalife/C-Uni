#include<stdio.h>
#include<math.h>

int main() {
  float x, z, sum = 1, f = 1;
  int i;
  printf("\nEnter x (between 0 to 1) :");
  scanf("%f", & x);
  z = x;
  for (i = 2; i <= 10; i++) {
    sum += z;
    f = f * I;
    z = z * x / f;
  }
  printf(" exp(%f) = %f ", x, sum);:
  getch();
  return (0);
}