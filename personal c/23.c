#include <stdio.h>
int main()
{
  int i,j,k,rows;
  printf("Enter number of rows:");
  scanf("%d",&rows);
   for(i=1;i<=rows;i++){
        k=1;
      for(j=1;j<=rows;j++){
         if(j<=i){
             if(j%2==0)
               k=0;
           printf("%d",k);
              k++;
         }
         else
            printf(" ");
      }
      printf("\n");
   }
   return 0;
}
