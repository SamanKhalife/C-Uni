#include<stdio.h>
#include<conio.h>
int main() {
  const int arraysize = 12;
  int A[arraysize] = {5,7,-12,235,178,-100,236,1,9,0,11,102};
  int i, total = 0;
  for (i = 0; i < arraysize; i++)
    total += A[i];
  printf("\n Total=%d", total);
  getch();
  return (0);
}