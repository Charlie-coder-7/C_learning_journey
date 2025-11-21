#include<stdio.h>

int main()
{
    int i=72;
    int* j=&i;//j is a pointer pointing to i
    int k=53;
    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",j);
    printf("The address of i is %p\n",&k);

    printf("Value at address j is %d\n",*(&i));
    printf("Value at address j is %p\n",*(&j));
    return 0;
}