#include <stdio.h>
int main()
{
  int i,j,k=0,p;
   for(i=1;i<=5;i++){
        if(i%2==1)
         k=k+1;
       else{
        k=k+i;
        k--;
       }
        p=k;
     for(j=1;j<=9;j++){
        if(j<=2*i-1){
           if(j%2!=0){
           printf(" %d",p);
          if(i%2==1){
            p++;k++;
          }
          else
            p--;
        }
        else
          printf(" *");
        }
        else
          printf(" ");
     }
     printf("\n");
   }
   return 0;
}
