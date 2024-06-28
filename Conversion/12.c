#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   char h[15];
   int dec=0,rem,k=0,num;
   printf("Enter binary number:\n");
   scanf("%d",&num);

   while(num!=0){
      rem=num%10;
      dec=dec+rem*pow(2,k);
      num=num/10;
      k++;
   }
   int i=0,r;

   while(dec!=0){
      r=dec%16;
      if(r>9)
        h[i]=(char)(r+55);
      else
        h[i]=(char)(r+48);

      dec=dec/16;
      i++;
   }
   h[i]='\0';
   strrev(h);
   printf("\nHexadecimal value is: %s",h);

   return 0;
}

