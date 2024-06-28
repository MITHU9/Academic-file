#include <stdio.h>
int main()
{
  int n,r,sum=0,temp;
  printf("ENTER THE NUMBER:");
  scanf("%d",&n);
  temp=n;
  while(n>0)
  {
   r=n%10;
   r=r*r*r;
   sum=sum+r;
   n=n/10;
  }
  n=temp;
  if(sum==n)

      printf("This is a armstrong number");

  else

      printf("Not a armstrong number");

   return 0;
}
