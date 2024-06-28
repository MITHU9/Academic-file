#include<stdio.h>
int main()
{
  int n,i,a=1,b=1,c,sum=0;
  printf("Enter series limit:");
  scanf("%d",&n);

 for(i=1;i<=n;i++){
    sum=sum+a;
      c=a+b;
      a=b;
      b=c;
  }
  printf("Sum: %d\n",sum);
  a=1;b=1;
  printf("series:");
  for(i=1;i<=n;i++){
    printf(" %d + ",a);

      c=a+b;
      a=b;
      b=c;
  }

  printf(".... + n\n");

    return 0;
}
