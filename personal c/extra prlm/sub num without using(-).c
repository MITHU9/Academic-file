#include <stdio.h>
int main()
{
  int a,b,sub;
  printf("Enter two numbers:");
  scanf("%d %d",&a,&b);
                    //~b is 1s compliment
  sub=a+~b+1;       //~b+1 is 2s compliment
  printf("Subtraction of two number:%d",sub);


  return 0;
}

