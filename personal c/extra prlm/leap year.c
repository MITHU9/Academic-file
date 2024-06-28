#include <stdio.h>
int main()
{
  int year;
  printf("Enter a Year:");
   scanf("%d",&year);
    if(year%4)
        printf("Not a leap year");
    else if(year%100)
        printf("Leap year");
    else if(year%400)
        printf("Not a leap year");
    else
        printf("Leap year");

    return 0;
}
/*
int main()
{
  int year;
  printf("Enter a year:");
  scanf("%d",&year);
  if(year%100==0){
    if(year%400)
        printf("This is a Leap year");
    else
        printf("Not a leap year");
  }
  else
    {
    if(year%4==0)
        printf("This is a Leap year");
    else
        printf("Not a leap year");
  }
  return 0;
}*/
