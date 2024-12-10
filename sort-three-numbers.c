#include<stdio.h>
int main (){
int a,b,c,min, mid, max;
printf("\n Enter a,b,c:");
scanf ("%d%d%d", &a, &b, &c) ;
min=a>b? (b>c?c:b): (a>c) ?c:a;
mid=a>b? (a>c?(b>c) ?c:b:a) : (b>c) ? (a>c) ?a:c:b;
max=a>b?(a>c?a:c): (b>c) ?b:c;
printf(" %d %d %d",min, mid, max);
getch ();
return(0);
}