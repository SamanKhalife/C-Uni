#include <stdio.h>

int main() {
  int n, i, sum, c = 1;
  sum = 0;
  printf("\nEnter n:");
  scanf("%d", & n);
  for (i = 1; i <= n; i++) {
    sum += c;
    c += 2;
  }
  printf("Square of %d = d", n, sum);
  getch();
  return (0);
}