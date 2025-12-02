#include<stdio.h>

int main()
{
    //POINTER ARITHMETIC USING INTEGER
    // int a =5;
    // int *ptr=&a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);
    // return 0;

    // POINTER ARITHMETIC USING CHARACTER
    char n ='a';
    char *ptr=&n;
    printf("The address of a is %u\n",&n);
    printf("The address of a is %u\n",ptr);
    ptr++;
    printf("The value of ptr is %u\n",ptr);
    return 0;
}