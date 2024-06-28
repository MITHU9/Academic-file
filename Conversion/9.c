#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   char h[15];
   int i,k=0,dec=0,L;
   printf("Enter Hexadecimal number:\n");
   scanf("%s",h);

   strupr(h);
   L=strlen(h);
   for(i=L-1;i>=0;i--){
      if(isupper(h[i]))
        dec=dec+(h[i]-55)*pow(16,k);
      else
        dec=dec+(h[i]-48)*pow(16,k);
      k++;
   }
   printf("\nDecimal value is: %d",dec);

   return 0;
}
