#include <stdio.h>
int main()
{
    char ch;
    switch (ch = getchar())
    {
    case 'b':
    case 'B':
        printf("Blue");
        break;
    case 'r':
    case 'R':
        printf("Red");
        break;
    case 'g':
    case 'G':
        printf("Green");
        break;
    default:
        printf("Error!");
    }
    getch();
    return (0);
}