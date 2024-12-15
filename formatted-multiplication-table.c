#include<stdio.h>

int main() {
  int n, i;
  printf("\nEnter n: ");
  scanf("%d", & n);
  printf("\ni i*10 i*100 i*1000\n");
  for (i = 1; i <= n; i++)
    printf("%d   %d   %d  %d\n",
      i, i * 10, i * 100, i * 1000);
  getch();
  return (0);
  b
}