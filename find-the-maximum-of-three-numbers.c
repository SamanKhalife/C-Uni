#include<stdio.h>
int main (){
float x,y, z, max;
printf("\n Enter x,y,z:");
scanf("%f%f%f", &x, &y, &z) ;
if (x>y)
if (x>z)max=x; else max=z;
else
if (y>z) max=y; else max=z;
printf(" Max= %f",max);
getch ();
return (0);
}