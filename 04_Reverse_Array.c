#include<stdio.h>

void PrintArray(int a[],int n)
{
   for (int i = 0; i < 6; i++)
   {
    printf("%d",a[i]);
   }
   printf("\n");
}
void Reverse(int arr[],int n)
{
    int temp;
    for (int i = 0; i < n/2; i++)
    {
        temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
    
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    PrintArray(arr,6);
    Reverse(arr,6);
    PrintArray(arr,6);
    return 0;
}