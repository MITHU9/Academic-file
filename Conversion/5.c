#include <stdio.h>
#include <stdio.h>
int main()
{
   int n,rem,dec=0,k=1;
   printf("Enter any Octal number:\n");
   scanf("%d",&n);

   while(n!=0){
     rem=n%10;
     dec=dec+(rem*k);
     k=k*8;
     n=n/10;
   }
   printf("\nDecimal value is: %d",dec);

   return 0;
}
