#include <stdio.h>
#include <conio.h>
int main()
{
   int n,rem,octal=0,p=1;
   printf("Enter any number:\n");
   scanf("%d",&n);

   while(n!=0){
      rem=n%8;
      octal=octal+(rem*p);
      p=p*10;
      n=n/8;
   }
   printf("\nOctal value is: %d",octal);


    return 0;
}
