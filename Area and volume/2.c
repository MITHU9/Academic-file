#include <stdio.h>
#include <conio.h>
int main()
{
   float base,height,Area;
   printf("Enter base:\n");
   scanf("%f",&base);
   printf("Enter hieght:\n");
   scanf("%f",&height);

   Area=(base*height)/2.0;
   printf("\nArea is: %.2f",Area);

    return 0;
}
