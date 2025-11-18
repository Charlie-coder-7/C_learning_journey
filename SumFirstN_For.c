#include <stdio.h>

int main()
{
    // int i = 0;
    // int sum = 0;
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= 10);
    // printf("The sum of first ten natural no is %d\n", sum);
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum += i;
    }
    printf("The sum of first ten natural no is %d\n", sum);

    return 0;
}