#include <stdio.h>
int main()
{
 int i,j,k=1,p,r;
 printf("Enter number of rows:");
 scanf("%d",&r);
 for(i=1;i<=r;i++){
      p=k;
    for(j=1;j<=i;j++){
        printf(" %d",p);
            p=p-(r-i+j);
      }
     k=k+1+r-i;
    printf("\n");
  }

    return 0;
}

