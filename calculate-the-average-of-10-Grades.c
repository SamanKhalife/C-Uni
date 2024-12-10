#include<stdio.h>
int main(){
int counter;
float grade, total, average;
total=0;
counter=1;
while (counter <= 10){
    printf ("Enter Grade : ");
    scanf ("%f",&grade);
    total+=grade;
    counter++;
}
average=total/10;
printf ("Average = %f",average);
getch ();
return(0);
}