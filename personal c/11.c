#include <stdio.h>
int main()
{
  int i,j,k=0,rows,n;
  printf("Enter the rows:");
  scanf("%d",&rows);
  n=(rows+1)/2;
  for(i=1;i<=rows;i++){
        i<=n?k++:k--;
     for(j=1;j<=n;j++){
        if(j<=k)
          printf("*");
        else
            printf(" ");
     }
    printf("\n");
  }

  return 0;
}
