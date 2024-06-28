#include <stdio.h>
#include <conio.h>
int main()
{
   int n,a,d,sum=0,tn,i;
   printf("Enter 1st number of AP series:\n");
   scanf("%d",&a);
   printf("Enter Total number of AP series:\n");
   scanf("%d",&n);
   printf("Enter Common difference of AP series:\n");
   scanf("%d",&d);
   printf("\n");

   sum=(n*(2*a+(n-1)*d))/2;

   tn=a+(n-1)*d;

   for(i=a;i<=tn;i=i+d){
        if(i!=tn){
           printf(" %d + ",i);
        }
      else
        printf("%d = %d ",i,sum);
   }

    return 0;
}
