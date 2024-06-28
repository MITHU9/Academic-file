#include<stdio.h>
int main()
{
  int n,div;
  printf("Enter the weight:");
  scanf("%d",&n);

  div=n/2;
  if(div%2==0)
    printf("Yes\n");

  else
    printf("No");


  return 0;
}
