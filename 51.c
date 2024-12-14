#include<stdio.h>

int main() {
    long int base2, base10 = 0, n, k;
    printf("\nEnter number in base 2 : ");
    scanf("%ld", & base2);
    k = 1;
    n = base2;
    while (n != 0) {
      base10 = base10 + (n % 10) * k;
      k *= 2;
      n = n / 10;
    }
    printf("%ld number in base 2 is equal
      to % d number in base 10 ",base2,base10);
      getch();
      return (0);
    }