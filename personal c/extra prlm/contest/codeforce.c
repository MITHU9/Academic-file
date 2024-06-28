#include <stdio.h>
int main()
{
 int n,r,temp,rev=0;
 printf("Enter the number:");
 scanf("%d",&n);
 temp=n;
 while(n!=0)
 {
   r=n%10;
   rev=rev*10+r;
   n=n/10;
  }
   n=temp;
   if(rev==n)
   {
    printf("yes\n");
   }
    else
    {
       printf("No\n");
    }

    return 0;
}
