#include<stdio.h>
int main (){
    int a,b,c,min;
    printf("\n Enter a,b,c:");
    scanf("d%d%d", &a, &b, &c) ;
    min=a>b? (b>c?c:b) : (a>c) ?c:a;
    printf("Min=%d",min);
    getch ();
    return (0);
}