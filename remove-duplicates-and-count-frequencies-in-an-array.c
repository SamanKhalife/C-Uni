#include<stdio.h>
#include<conio.h>
#define n 10

int main() {
  int a[n], b[n], c[n], i, k, j, x;
  for (i = 0; i < n; i++) {
    printf("A[%d] :", i);
    scanf("%d", & a[i]);
  }
  for (i = 0; i < n; i++) c[i] = 0;
  k = -1;
  for (i = 0; i < n; i++) {
    for (j = 0; j <= k; j++)
      if (a[i] == b[j]) x = 1;
    if (x == 0) {
      b[++k] = a[i];
      for (j = 0; j < n; j++)
        if (a[i] == a[j]) c[k]++;
    }
  }
  for (i = 0; i <= k; i++)
    printf("\n %d :%d", b[i], c[i]);
    getch();
  return (0);
}