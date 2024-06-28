#include<stdio.h>
#include<string.h>
int main()
{
  int i,l;
  char str[50];
  printf("Enter a string:");
  scanf("%s",str);
  //gets(str);
  l=strlen(str);
  for(i=0;i<l/2;i++){
    if(str[i]!=str[l-1-i]){
       printf("Not palindrome");
        break;
    }
  }

   if(i==l/2)
    printf("String is palindrome");


   return 0;
}
