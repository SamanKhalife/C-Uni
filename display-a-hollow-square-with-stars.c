#include <stdio.h>
int main()
{
  int n, i, j;
  printf("\nEnter n :");
  scanf("%d", &n);
  if ((n < 1) || (n > 20))
    printf("Error! input is too big!");
  else
  {
    for (i = 1; i <= n; i++)
      printf("*");
    printf("\n");
    for (i = 1; i <= n - 2; i++)
    {
      printf("*");
      for (j = 1; j <= n - 2; j++)
        printf(" ");
      printf("*\n");
    }
    for (i = 1; i <= n; i++)
      printf("*");
  }
  getch();
  return (0);
}