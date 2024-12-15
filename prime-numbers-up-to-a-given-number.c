#include<stdio.h>
#include<conio.h>

int main() {
  int n, i, j, count;
  printf("\nEnter n : ");
  scanf("%d", & n);
  for (i = 2; i <= n; i++) {
    count = 0;
    for (j = 2; j <= i / 2; j++)
      if (i % j == 0) {
        count++;
        break;
      }
    if (count == 0)
      printf("%4d ", i);
  }
  getch();
  return (0);
}