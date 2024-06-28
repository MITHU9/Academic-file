#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
   float p,q,area,side;
   printf("Enter first diagonal value:\n");
   scanf("%f",&p);
   printf("Enter side value:\n");
   scanf("%f",&side);

   q = sqrt((4*side*side) - (p*p));
   area = p*q / 2.0;
   printf("Area is : %f",area);

    return 0;
}
