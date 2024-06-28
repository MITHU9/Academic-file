#include<stdio.h>
int main()
{
  char ch1,ch2,ch3,ch4,ch5,count=0;

   printf("Enter input 1:");
   scanf("%c",&ch1);
   printf("Enter input 2:");
   scanf("%c",&ch2);
   printf("Enter input 3:");
   scanf("%c",&ch3);
   printf("Enter input 4:");
   scanf("%c",&ch4);
   printf("Enter input 5:");
   scanf("%c",&ch5);
   if(ch1==a||e||i||o||u)
        count++;
   else if(ch2==a||e||i||o||u)
      count++;
     else if(ch3==a||e||i||o||u)
        count++;
       else if(ch4==a||e||i||o||u)
        count++;
       else if(ch5==a||e||i||o||u)
        count++;
        printf("you have entered %d vowel",count);
    return 0;
}
