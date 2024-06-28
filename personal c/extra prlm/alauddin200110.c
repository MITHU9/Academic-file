#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n,i,j,k;

  printf("Input size:");
  scanf("%d",&n);

  int *ptr;
  ptr=(int*) malloc (n*sizeof(int));
  printf("\nNumber:");
  for(i=0; i<n; i++)
    {
    scanf("%d",&ptr[i]);
  }
 for(i=0; i<n; i++)
 {
  for(j=i+1; j<n ;j++)
  {
   for(k=j+1;k<n;k++)

  printf("%d %d %d\n",ptr[i],ptr[j],ptr[k]);
 }

 }

 return 0;
}
