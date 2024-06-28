#include<stdio.h>
int main()
{
  int a=1,b=2,c=3;
  if(a<b)
        b=c++;
  if(a<b)
    c=++a;

    a=--b;

    printf("a=%d\tb=%d\tc=%d",a,b,c);

    return 0;
}
