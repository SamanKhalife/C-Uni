#include<stdio.h>
#define size 10
int main() {

  int arr[size], i;
  for (i = 0; i < size; i++) {
    printf("arr[%d]=", i);
    scanf("%d", & arr[i]);
  }
  for (i = 9; i >= 0; i--)
    printf("%d", arr[i]);
  getch();
  return (0);
}