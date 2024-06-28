#include <stdio.h>
#include <conio.h>
int main()
{
   int n,rev=0,rem,r;
   printf("Enter any number:\n");
   scanf("%d",&n);

   while(n > 0){
     rem=n%10;
     rev=rev*10+rem;
     n=n/10;
   }
   printf("\n");

   while( rev > 0){
      r=rev%10;
      rev=rev/10;

   switch(r){
        case 0: printf("ZERO ");break;
        case 1: printf("ONE ");break;
        case 2: printf("TWO ");break;
        case 3: printf("THREE ");break;
        case 4: printf("FOUR ");break;
        case 5: printf("FIVE ");break;
        case 6: printf("SIX ");break;
        case 7: printf("SEVEN ");break;
        case 8: printf("EIGHT ");break;
        case 9: printf("NINE ");break;

      }

   }

  return 0;
}
