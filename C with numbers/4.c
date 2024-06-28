#include <stdio.h>
int main()
{
   int x,y,sum;
   printf("Enter two numbers:");
   scanf("%d %d",&x,&y);
   sum=x-~y-1;
   printf("Sum of two number:%d",sum);
   return 0;
}
