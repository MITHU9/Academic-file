#include<stdio.h>
#define N 5
int main()
{
   int a[N],i;
  printf("Enter %d Element of array:\n",N);

  for(i=0;i<N;i++)
    scanf("%d",&a[i]);


  printf("The Elements are:\n");
  for(i=N-1;i>=0;i--)
    printf("%d\n",a[i]);


    return 0;
}
