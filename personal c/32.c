#include <stdio.h>
int main()
{
  int i,j,r;
   printf("Enter number of rows:");
   scanf("%d",&r);
   for(i=1;i<=r;i++){
     for(j=1;j<=r;j++){
        if(j==i||j==r+1-i)
           printf("*");
        else
            printf(" ");
     }
     printf("\n");
   }
   return 0;
}
