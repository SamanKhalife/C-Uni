#include<stdio.h>
#include<conio.h>

int main() {
    char str[30];
    int i, op1;
    printf("Enter str :");
    gets(str);
    op1 = 0;
    for (i = 0;
      (str[i] != '\0'); i++)
      if ((str[i] >= 'A') && (str[i] <= 'F'))
        op1 = op1 * 16 + str[i] - 'A' + 10;
        else if ((str[i] >= 'a') && (str[i] <= 'f'))
          op1 = op1 * 16 + str[i] - 'a' + 10;
        else
          op1 = op1 * 16 + str[i] - 48; printf("number is %d ", op1); getch();
        return (0);
      }