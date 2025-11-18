#include<stdio.h>

int main()
{
    int i =0;
    int sum=0;
    while (i<=10)
    {
       sum += i;
       i++;
    }
    printf("The sum of first ten natural no is %d\n",sum);
    return 0;
}