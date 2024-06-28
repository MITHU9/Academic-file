#include <stdio.h>
#include <stdio.h>
int main()
{
   float km,m,cm,mm,inch,feet;
   printf("Enter distance in km:\n");
   scanf("%f",&km);

   m=km*1000.0;
   cm=km*100000.0;
   mm=km*1000000.0;
   feet=km*3280.84;
   inch=km*39370.1;

   printf("\nDistance in meter: %f\n",m);
   printf("Distance in centimeter: %f\n",cm);
   printf("Distance in milimeter: %f\n",mm);
   printf("Distance in feet: %f\n",feet);
   printf("Distance in inch: %f\n",inch);

    return 0;
}
