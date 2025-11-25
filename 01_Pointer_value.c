#include<stdio.h>

int main()
{
    int a = 7;
    int * ptr = &a;
    printf("The address of a is %p\n",&a);
    printf("The value at address of a is %d\n",*ptr);
    return 0;
}