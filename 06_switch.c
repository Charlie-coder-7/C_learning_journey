#include<stdio.h>

int main()
{
    int a;
    printf("Enter a:");
    scanf("%d",&a);
    switch (a)
    {
     case 1:
      printf("You enterd 1");
      break;
      case 2:
      printf("You enterd 2");
      break;
      case 3:
      printf("You enterd 3");
      break;
      case 4:
      printf("You enterd 4");
      break;
      case 5:
      printf("You enterd 5");
      break;
      default:
       printf("does not match anything");
    }
    return 0;
}