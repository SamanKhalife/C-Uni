#include <stdio.h>
int main()
{
  int counter = 100;
  while (counter < 1000)
  {
    printf("%5d", counter);
    counter += 2;
  }
  getch();
  return (0);
}