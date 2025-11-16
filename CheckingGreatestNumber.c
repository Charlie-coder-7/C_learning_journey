#include <stdio.h>

int main()
{
    int a = 4, b = 6, c = 888, d = 9;
    // int a,b,c,d;
    // printf("Enter the four numbers:");
    // scanf("%d%d%d%d",&a,&b,&c,&d);
    if (a > b && a > c && a > d)
    {
        printf("The greatest number is %d\n", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The greatest number is %d\n", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("The greatest number is %d\n", c);
    }
    else if (d > a && d > c && d > b)
    {
        printf("The greatest number is %d\n", d);
    }
    return 0;
}