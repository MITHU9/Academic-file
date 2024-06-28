#include <stdio.h>
#include <conio.h>
int main ()
{
   double n,binary,bin2=0.0,f2,f3=0.1;
   int x,bin1=0,temp,i,rem,p=1;

   printf("Enter any  fractional decimal number:\n");
   scanf("%lf",&n);

   x=n;
   f2=n-x;

   while(x!=0){
      rem=x%2;
      bin1=bin1+(rem*p);
      p=p*10;
      x=x/2;
   }

   for(i=1;i<=6;i++){
     f2=f2*2;
     temp=f2;
     bin2=bin2+temp*f3;

   if(temp==1)
     f2=f2-temp;
     f3=f3/10;
   }

   binary=bin1+bin2;
   printf("\nFractional binary value is: %lf",binary);


    return 0;
}
