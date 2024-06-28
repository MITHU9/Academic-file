#include <stdio.h>
#include <conio.h>
int main()
{
   float length,width,area;
   printf("Enter Length:\n");
   scanf("%f",&length);
   printf("Enter Width:\n");
   scanf("%f",&width);

   area=(length*width);
   printf("\nArea is: %.2f",area);

    return 0;
}
