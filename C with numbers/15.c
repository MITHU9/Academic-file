#include <stdio.h>
int main()
{
   int num,rem;
   printf("Enter a number:\n");
   scanf("%d",&num);

   while(num > 0){

     rem=num%10;
     num=num/10;
     printf("\n%d",rem);
   }

    return 0;
}
