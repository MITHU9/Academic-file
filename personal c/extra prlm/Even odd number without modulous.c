#include <stdio.h>
int main()
{
   int x;
   printf("Enter a number:");
   scanf("%d",&x);
   if(x/2*2==x)
    printf("The number is Even");
   else
    printf("The number is Odd");

    return 0;
}
