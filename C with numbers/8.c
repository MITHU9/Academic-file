#include <stdio.h>
int main()
{
  int n,temp,rem,sum=0;
  printf("Enter a number:\n");
  scanf("%d",&n);
  temp = n;
  while(temp != 0){
    rem = temp%10;
    sum = sum+rem;
    temp = temp/10;
    if(temp == 0){
        if(sum > 9){
           temp = sum;
           sum = 0;
        }
     }
  }
  printf("Generic root of the number:%d\n",sum);

    return 0;
}
