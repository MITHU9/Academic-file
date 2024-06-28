#include <stdio.h>
int main()
{
  int a,b,sub;
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
  sub=a+~b+1;
  printf("Subtraction of two numbers:%d",sub);


  return 0;
}
