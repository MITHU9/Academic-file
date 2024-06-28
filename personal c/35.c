#include <stdio.h>
int main()
{
 int i,k,n=1,r;
 printf("Enter number of rows:");
 scanf("%d",&r);
 for(i=1,k=0;i<=2*r-1;i++){
        if(i<r-k)
            printf(" ");
      else{
          if(n)
            printf("*");
         else
             printf(" ");
           n=1-n;
       }
       if(i==r+k){
           k++;
         printf("\n");
           if(i==2*r-1)
             break;
           i=0;
          n=1;
      }

    }
   return 0;
}
