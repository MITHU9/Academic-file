#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   long num;
   int dec=0,rem,k=0,octal=0;
   printf("Enter binary number:\n");
   scanf("%ld",&num);

   printf("\nOctal value of %ld is: ",num);


   while(num!=0){
      rem=num%10;
      dec=dec+rem*pow(2,k);
      num=num/10;
      k++;
   }
   k=1;
   rem=0;
   while(dec!=0){
      rem=dec%8;
      octal=octal+(rem*k);
      k=k*10;
      dec=dec/8;
   }
   printf("%d\n",octal);

    return 0;
}
