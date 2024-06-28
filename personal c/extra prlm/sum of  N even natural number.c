#include <stdio.h>
int main()
{
  int n,i,sum=0;
  system("color ac");
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(i%2==0)
       sum=sum+i;
   }
   printf("The sum is:=%d\n",sum);

  return 0;
}
