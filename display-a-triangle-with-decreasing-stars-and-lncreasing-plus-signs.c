#include<stdio.h>
int main (){
int n,i,j;
printf ("\nEnter n: ");
scanf("%d",&n);
for (i=1;i <= n+1;i++){
for (j=1;j <= n-i+1; j++)
printf("+");
for (j=1;j <= i-1; j++)
printf("*");
printf ("\n");
}
getch ();
return(0);
}