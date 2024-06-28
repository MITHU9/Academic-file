#include <stdio.h>
int main()
{
   int i,a,n;
   printf("Enter a number:");
   scanf("%d",&n);
   for(i=1;i<=10;i++){
        a=n*i;
      printf("%dx%d=%d\n",n,i,a);
   }


    return 0;
}
