#include<stdio.h>

int main()
{
    int a=6;
    int *ptr1=&a;
    int **ptr2=&ptr1;

    printf("The address of i is %u\n",&a);
    printf("The value of a is %d\n",*ptr1);
    printf("The  value of i is %d\n",**ptr2);
    return 0;
}