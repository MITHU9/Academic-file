#include <stdio.h>
#include <stdio.h>
int main()
{
   char h[15];
   int n,dec=0,rem,k=1;
   printf("Enter any Octal number:\n");
   scanf("%d",&n);

   while(n!=0){
      rem=n%10;
      dec=dec+(rem*k);
      k=k*8;
      n=n/10;
   }
    int r,i;
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
