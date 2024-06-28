#include <stdio.h>
int main()
{
   int i,j,k,n=0;
   for(i=1;i<=9;i++){
        k=1;
       i<=5?n++:n--;
     for(j=1;j<=5;j++){
        if(j>=6-n){
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
