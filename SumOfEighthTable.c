 #include<stdio.h>

int main()
{
    int sum = 0;
    for (int i = 1 ; i <= 10; i++)  
    {
       sum += (8*i);
    }
    printf("The sum of 8 table is :%d\n",sum);
    return 0;
}