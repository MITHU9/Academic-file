#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   int n,a,r,sum=0,tn,i;
   printf("Enter 1st number of G.P series:\n");
   scanf("%d",&a);
   printf("Enter Common Ratio of G.P series:\n");
   scanf("%d",&r);
   printf("Enter Total number of G.P series:\n");
   scanf("%d",&n);
   printf("\n");

   sum=(a*(pow(r,n)-1))/(r-1);

   tn=a*pow(r,n-1);

   for(i=a;i<=tn;i=i*r){
      if(i!=tn){
        printf(" %d + ",i);
      }
      else
        printf("%d = %d",i,sum);
   }

    return 0;
}
