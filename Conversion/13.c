#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   int b1,dec1=0,k=0,rem,sum,p,binary=0;

   printf("Enter 1st binary number:\n");
   scanf("%d",&b1);

   while(b1!=0){
      rem=b1%10;
      dec1=dec1+rem*pow(2,k);
      b1=b1/10;
      k++;
   }

   rem=0;
   k=0;
   int dec2=0,b2;

   printf("Enter 2nd binary number:\n");
   scanf("%d",&b2);

   while(b2!=0){
     rem=b2%10;
     dec2=dec2+rem*pow(2,k);
     b2=b2/10;
     k++;
   }

   sum=dec1+dec2;
   rem=0;
   p=1;

   while(sum!=0){
    rem=sum%2;
    binary=binary+(rem*p);
    p=p*10;
    sum=sum/2;
   }

   printf("\nThe sum is: %d",binary);


    return 0;
}
