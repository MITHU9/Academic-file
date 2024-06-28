#include<stdio.h>
int main()
{
   char str[20];
   int i;
   printf("Enter a string:");
   gets(str);
   for(i=0;str[i]!='\0';i++){
      if(str[i]>='A' && str[i]<='Z')
         str[i]=str[i]+32;
   }
   puts(str);

    return 0;
}
