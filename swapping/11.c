#include <stdio.h>
int main()
{
  int i,j,k=0,N;
  printf("Enter a number:");
  scanf("%d",&N);
  for(i=1;i<=N;i++){

    for(j=1;j<=i;j++){
            k++;
          printf(" %d",k);
      }
    printf("\n");
  }

    return 0;
}
