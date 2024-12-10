#include<stdio.h>
int main (){
int n,i,j;

printf("\nEnter n: ");
scanf("%d",&n);

for (i=1;i <= n;i++){
    for (j=1;j <= i; j++)
    printf("%3d",i);
    printf("\n");
}

getch ();
return (0);
}