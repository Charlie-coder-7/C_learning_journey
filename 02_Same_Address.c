#include <stdio.h>
int returning_5(int *ptr)
{
    printf("The value of ptr is %d\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}
int main()
{
    int a = 7;
    int *ptr = &a;
    printf("The address of a is %u\n", &a);
    returning_5(ptr);
    return 0;
}