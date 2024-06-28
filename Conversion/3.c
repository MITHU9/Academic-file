#include <stdio.h>
#include <conio.h>
int main()
{
   char h[10];
   int n,rem,i=0;
   printf("Enter any number:\n");
   scanf("%d",&n);

   while(n!=0){
     rem=n%16;
     if(rem>9)
        h[i]=(char)(rem+55);
     else
        h[i]=(char)(rem+48);

      n=n/16;
      i++;
   }
   h[i]='\0';
   strrev(h);
   printf("\nHexadecimal value is: %s",h);

    return 0;
}
