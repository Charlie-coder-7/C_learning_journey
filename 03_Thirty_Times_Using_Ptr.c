#include<stdio.h>
void change_to_Thirty_times(int*);

void change_to_Thirty_Times(int * a)
{
    *a = *a*30;
}
int main()
{
    int x = 77;
    printf("The value at x is %d\n",x);
    change_to_Thirty_Times(&x);
    printf("The value of x is %d\n",x);

    return 0;
}