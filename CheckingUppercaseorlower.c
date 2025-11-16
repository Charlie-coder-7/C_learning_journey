#include<stdio.h>

int main()
{
    char ch = 'D';
    printf("The character is %c\n",ch);
    printf("the value of character is %d\n",ch);
    if (ch >= 97 && ch<=122)
    {
        printf("The character is in lowercase\n");
    }
    else
    {
        printf("The character is in uppercase\n");
    }
    
    return 0;
}