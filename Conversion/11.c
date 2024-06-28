#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   int dec=0,rem,k=0,num;
   printf("Enter binary number:\n");
   scanf("%d",&num);

   while(num!=0){
      rem=num%10;
      dec=dec+rem*pow(2,k);
      num=num/10;
      k++;
   }
   printf("\nDecimal value is: %d",dec);

   return 0;
}
