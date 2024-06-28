#include <stdio.h>
int main()
{
   int x,y;
   printf("Enter two numbers:");
   scanf("%d %d",&x,&y);
   while(y!=0)
   {
     x++;
     y--;
   }
    printf("Sum of two numbers:%d",x);

   return 0;
}

