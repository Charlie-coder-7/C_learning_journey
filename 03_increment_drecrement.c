#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);
    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", i++); // 10
    printf("The value of i is %d\n", i);   // 11

    // In i++ it prints i first then increment the value of i
    // In ++i it increment the i value first then prints the incremented value of i
    i += 2; // is equals to writing i = 1+2;
    printf("The value of i is %d\n", i);
    return 0;
}