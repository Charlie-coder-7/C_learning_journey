#include<stdio.h>

int main()
{
    char grade;
    int marks = 55;
    if (marks<=100 && marks>=90)
    {
        printf("Grade is 'A'");
    }
    else if (marks<=90 && marks>=80)
    {
        printf("Grade is 'B'");
    }
    else if (marks<=80 && marks>=70)
    {
        printf("Grade is 'C'");
    }
    else if (marks<=70 && marks>=60)
    {
        printf("Grade is 'D'");
    }
    else if (marks<=60 && marks>=50)
    {
        printf("Grade is 'E'");
    }
    else
    {
        printf("Grade is 'F'");
    }
    
    return 0;
}