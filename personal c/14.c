#include <stdio.h>
int main()
{
  int i,j,k,rows;
  printf("Enter number of rows:");
  scanf("%d",&rows);
  for(i=0;i<=rows;i++){
        k=rows-i;
    for(j=0;j<=rows;j++){
        if(j<=rows-i){
          printf("%d ",k);
            k--;
        }
        else
          printf(" ");
    }
    printf("\n");
  }

  return 0;
}
