#include<stdio.h>
#include<string.h>
int main()
{
    char c = 'A';
    int contains=0;
    char str[]="Achyuta";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==c)
        {
            contains++;
        }
        
    }
    if (contains){
        printf("Yes it contains\n");
    }
    else
    {
       printf("It doesn't contain"); 
    }
    
    printf("%d",contains);
    return 0;
}