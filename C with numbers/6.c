#include <stdio.h>
int main()
{
  int a,b,c;
  printf("Enter 3 Numbers:");
  scanf("%d %d %d",&a,&b,&c);
  if(a-b>0 && a-c>0){
    printf("%d is the largest number\n",a);
  }
  else{
    if(b-c>0){
        printf("%d is the Largest number\n",b);
    }
    else
       printf("%d is the Largest number\n",c);
   }

    return 0;
}
