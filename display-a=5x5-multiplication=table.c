#include<stdio.h>
int main (){
    int i,j;
    printf("\n");
    for (i=1;i <= 5;i++){
        for (j=1;j <= 5;j++)
        printf("%4d",i*j);
        printf("\n");
    }
getch ();
return(0);
}