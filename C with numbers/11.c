#include <stdio.h>
int stringToInt(char[]);
int main()
{
  char str[20];
  int value;
  printf("Enter any number:\n");
  scanf("%s",str);
  value=stringToInt(str);
  printf("string:%s and Integer:%d",str,value);

  return 0;
}

int stringToInt(char str[])
{
   int i=0,sum=0;
   while(str[i]!='\0'){
     if(str[i]<48 || str[i]>57){
        printf("unable to convert into integer\n");
     }
     else{
        sum=sum*10+(str[i]-48);
         i++;
     }
   }
   return sum;
}
