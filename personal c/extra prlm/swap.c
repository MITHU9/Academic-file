#include <stdio.h>
int main()
{
  int a,b,m;
  printf("Enter two number:");
  scanf("%d%d",&a,&b);
  m=a;
  a=b;
  b=m;
  printf("a=%d,b=%d",a,b);
 return 0;
}
