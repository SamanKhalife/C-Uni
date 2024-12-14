#include<stdio.h>

#include<conio.h>

int main() {
  int i = 1, f = 1;
  float e = 1;
  float term;
  term = 1.0 / f;
  while (term > 10e-4) {
    e += term;
    i++;
    f *= i;
    term = 1.0 / f;
  }
  printf("\ne=%7.4f", e);
  getch();
  return (0);
}