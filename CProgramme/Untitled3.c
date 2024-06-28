#include <stdio.h>
int main()
{
  int x=5,n=3,i,sum=0;
  printf("Enter value of x:");
  scanf("%d",&x);
  printf("Enter value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
   sum=sum+(i*x);
  }
  printf("(1*5)+(2*5)+(3*5)=%d",sum);
  return 0;
}
