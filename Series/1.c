#include <stdio.h>
#include <conio.h>
int main ()
{
   int n,i,sum=0;
   printf("Enter any number:\n");
   scanf("%d",&n);

   for(i=1;i<=n;i++){
     sum=sum+i;
   }
   printf("\nThe sum is: %d",sum);

    return 0;
}
