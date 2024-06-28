#include <stdio.h>
#include <conio.h>

int main()
{
  int a,b;
  printf("Enter two number:");
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("a=%d,b=%d",a,b);

}
void swap(int *x,int *y)
{
  int m;
  m=*x;
  *x=*y;
  *y=m;
}
