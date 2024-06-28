#include <stdio.h>
#include <stdio.h>
int main()
{
   int n,rem,dec=0,k=1,binary=0;
   printf("Enter any Octal number:\n");
   scanf("%d",&n);

   while(n!=0){
     rem=n%10;
     dec=dec+(rem*k);
     k=k*8;
     n=n/10;
   }
   int r,p=1;
   while(dec!=0){
      r=dec%2;
      binary=binary+(r*p);
      p=p*10;
      dec=dec/2;
   }
   printf("\nBinary value is: %d",binary);

    return 0;
}
