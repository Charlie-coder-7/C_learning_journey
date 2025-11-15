#include<stdio.h>

int main()
{
    int age = 45;
    if (age>65)
    {
        printf("You can drive and you are a senior citizen\n");
    }
    else if (age>40)
    {
        printf("You can drive and you are elder");
    }
    else if (age>18)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }
    
    return 0;
}