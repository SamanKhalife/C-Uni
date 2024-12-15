#include <stdio.h>
  int main() {
    int i, n;
    printf("\nEnter n :");
    scanf("%d", & n);
    n = n % 7;
    printf("\n sat sun mon tue wed thu fri\n");
    for (i = 1; i <= n; i++)
      printf("    ");

    for (i = 1; i <= 31; i++) {
      printf(" %2d ", i);
      if ((i + n) % 7 == 0)
        printf("\n");
    }
    getch();
    return (0);
  }