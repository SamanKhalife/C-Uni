#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a letter : ");
    ch = getch();
    switch (ch)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'Y':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'y':
        printf("vowel\n");
        break;
    default:
        printf("consonant\n", ch);
    }
    getch();
    return (0);
}