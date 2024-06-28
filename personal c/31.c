#include <stdio.h>
int main()
{
  int i,j,r,m,n;
  char k;
  printf("Enter number of rows:");
  scanf("%d",&n);
   for(i=1;i<=n;i++){
         k='A';
         r=1;
         m=1;
      for(j=1;j<=2*n-1;j++){
        if(j>=n+1-i&&j<=n-1+i&&m){
            if(j%2==1)
               printf("%c",k++);
           else if(j%2==0)
               printf("%d",r++);
               m=0;
        }
        else{
            printf(" ");
             m=1;
        }
      }
      printf("\n");
   }
   return 0;
}
