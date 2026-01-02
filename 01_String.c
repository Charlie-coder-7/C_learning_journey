#include<stdio.h>

int main()
{
    char st[]={"achyuta"};//same as below declaration
    // char st[]={'a','c','h','y','u','t','a','\0'};
    for (int i = 0; i < 7; i++)
    {
        printf("%c",st[i]);
    }
    return 0;
}
