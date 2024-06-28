#include <stdio.h>
int main()
{
   int a,b;
   printf("Enter Two number:\n");
   scanf("%d %d",&a,&b);

   while(a!=b){
      if(a>b){
        a=a-b;
      }
      else{
        b=b-a;
      }
   }
    printf("G.C.D is: %d",a);

    return 0;
}
