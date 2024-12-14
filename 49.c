#include<stdio.h>

#include<conio.h>

int main() {
  int n, m, k, s, t, r;
  printf("\nEnter n,m : ");
  scanf("%d%d", & n, & m);

  if (n > m) {
    s = n;
    t = m;
  } else {
    s = m;
    t = n;
  }
  r = s % t;
  while (r != 0) {
    s = t;
    t = r;
    r = s % t;
  }
  k = (n * m) / t;
  printf(" K.M.M of %d and %d is %d", n, m, k);
  getch();
  return (0);
}