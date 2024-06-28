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
    printf("This is a palindrome number");
   }
    else
    {
       printf("Not a palindrome number");
    }

    return 0;
}
