#include <stdio.h>
int main()
{
  int i,j,k,n=0;
   for(i=1;i<=21;i++){
      i<=11?n++:n--;
       k=n-1;
     for(j=1;j<=21;j++){
        if(j>=12-n&&j<=10+n)
          printf(" %d",j<11?k++%10:k--%10);

        else
            printf("  ");
     }
     printf("\n");
   }
  return 0;
}
