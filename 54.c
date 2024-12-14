#include<stdio.h>
#include<math.h>

int main() {
    int i, n, k = 1;
    float pow = 1;
    printf("\n Enter n:");
    scanf("%d", & n);
    printf("\nFloating point number\
      tdivedt2 Power ");
      for (i = -1; i > = -n; i--) {
        pow /= 2;
        k *= 2;
        printf("\n\t%4f\t1/%d \t 2^ %d", pow, k, i);
      }
      getch();
      return (0);
    }