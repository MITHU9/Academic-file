#include <stdio.h>
int main()
{
  int n,r,i,temp,fact,sum=0;
   printf("Enter the number:");
   scanf("%d",&n);
   temp=n;
   while(n>0)
   {
     r=n%10;
     fact=1;
     for(i=r;i>=1;i--)

    fact=fact*i;

    sum=sum+fact;
    n=n/10;
   }
   n=temp;
   if(sum==n)
   {
    printf("it is a strong number");
   }
    else
    {
      printf("not a strong number");
    }

   return 0;
}
