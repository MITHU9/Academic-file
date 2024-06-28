#include <stdio.h>
int main()
{
  int x=3,n=10,i,sum=0;
  printf("Enter value of x:");
  scanf("%d",&x);
  printf("Enter value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
   sum=sum+(i*x);

  }
  printf("(1*3)+(2*3)+(3*3)+(4*3)+(5*3)+(6*3)+(7*3)+(8*3)+(9*3)+(10*3)+=%d",sum);

    return 0;
}
