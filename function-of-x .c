#include<stdio.h>
int main(){
float x;
int y;
printf("\nEnter x : ");
scanf("%f",&x);
if (x>0)
    y=1;
else if (x == 0)
    y=0;
else
    y =- 1;
printf("y = %d\n",y);
getch ();
return(0);
}