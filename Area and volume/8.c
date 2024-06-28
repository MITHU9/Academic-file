#include <stdio.h>
#include <conio.h>
int main()
{
   float area,b,h;
   printf("Enter base value:\n");
   scanf("%f",&b);
   printf("Enter vartical height:\n");
   scanf("%f",&h);

   area = b*h;
   printf("Area is: %.2f",area);

    return 0;
}
