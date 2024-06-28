#include <stdio.h>
#include <conio.h>
int main()
{
   int n,i;
   float sum=0;
   printf("Enter Total number of H.P series:\n");
   scanf("%d",&n);
   printf("\n");

   for(i=1;i<=n;i++){

      sum=sum+(float)1/i;

     if(i==1)
        printf("1 +");

     else if(i!=n)
        printf(" 1/%d + ",i);

     else
        printf("1/%d = %f",i,sum);
   }

    return 0;
}
