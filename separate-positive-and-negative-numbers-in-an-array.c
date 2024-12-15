#include<stdio.h>
#include<conio.h>
#define n 50
int main() {
  int A[n], pos[n], neg[n];
  int i, k = 0, 1=0;
  for (i = 0; i < n; i++)

  {
    printf("A[%d] :",i);
    scanf("%d", &A[i]);

  }
  for (i = 0; i < n; i++)
    if (A[i] >= 0)
      pos[k++] = A[i];
    else
      neg[1++] = A[i];
  for (i = 0; i < k; i++)
    printf("\npos[%d]=%d", i, pos[i]);
  printf("\n");
  for (i = 0; i < 1; i++)
    printf("\nneg[%d]=%d", i, neg[i]);

  getch();
  return (0);
}