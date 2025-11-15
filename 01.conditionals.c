#include<stdio.h>

int main()
{
    int age=5;
    if (age>10)
    {
        printf("Your age is greater than 10");
    }
    else
    {
        printf("Your age is less than 10\n");
    }
    if (age%5==0)
    {
        printf("Your age is divisible by 5\n");
    }
    
    return 0;
}