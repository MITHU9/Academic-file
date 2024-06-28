#include <stdio.h>
int fact(int);
int main()
{
  int n,r,nCr;
  printf("Enter N and R value:");
  scanf("%d %d",&n,&r);

  nCr=fact(n) / (fact(r)*fact(n-r));
  printf("nCr factor of %d and %d is %d\n",n,r,nCr);

  return 0;
}
int fact(int n)
{
  int f=1;
  while(n!=0){
    f=f*n;
    n--;
  }
  return(f);
}
