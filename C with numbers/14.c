#include <stdio.h>
int main()
{
   int limit,num,big=0;
   printf("Enter limit:\n");
   scanf("%d",&limit);

   printf("Enter %d number:\n",limit);
   while(limit > 0){
      scanf("%d",&num);
      if(num > big){

        big = num;
      }
      limit--;
   }
   printf("The largest number is %d\n",big);

    return 0;
}
