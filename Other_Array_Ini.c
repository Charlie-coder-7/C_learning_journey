#include<stdio.h>

int main()
{
    int cgpa[3]={3,8,7};
    // int cgpa[]={3,8,7} also you can do this
        for (int i = 0; i < 3; i++)
    {
        printf("The value of array at index %d is %d\n",i,cgpa[i]);
    }
    
    return 0;
}