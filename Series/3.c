#include <stdio.h>
#include <conio.h>
#include <math.h>
int main ()
{
   int n,i,sum=0;
   printf("Enter any number:\n");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
     sum=sum+pow(i,3);
   }
   printf("\nThe sum is: %d",sum);

    return 0;
}


