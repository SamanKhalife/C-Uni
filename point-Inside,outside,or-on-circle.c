#include<stdio.h>
int main (){
int x,y,x0,y0,r,f;
printf("\nEnter x0,y0,r : ");
scanf("%d%d%d", &x0, &y0, &r);
printf("\nEnter x,y :");
scanf ("%d%d", &x, &y);
f=(x-x0)*(x-x0)+(y-y0)*(y-y0)-r*r;
if (f == 0)
  printf("It is on circle.\n");
  else if (f>0)
    printf("It is out of circle.\n");
  else
    printf("It is in circle.n");
getch ();
return(0);
}
