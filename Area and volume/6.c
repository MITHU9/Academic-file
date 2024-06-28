#include <stdio.h>
#include <conio.h>
int main()
{
   float base1,base2,height,Area;
   printf("Enter first base value:\n");
   scanf("%f",&base1);
   printf("Enter second base value:\n");
   scanf("%f",&base2);
   printf("Enter hieght:\n");
   scanf("%f",&height);

   Area=((base1+base2)/2)*height;
   printf("\nArea is: %.2f",Area);

    return 0;
}

