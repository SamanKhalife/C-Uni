#include<stdio.h>
#include<conio.h>

int main() {
  int A[10], i;
  A[0] = 0;
  A[1] = 1;
  for (i = 2; i < 10; i++)
    A[i] = A[i - 1] + A[i - 2];
  for (i = 0; i < 10; i++)
    printf("%5d", A[i]);
  getch();
  return (0);
}