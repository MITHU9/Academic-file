#include<stdio.h>
#include<string.h>
int main()
{
  char str[30],str1[20];
  int i,j,k,l,count=0;
  printf("Enter 1st string:\n");

  gets(str);
  printf("Enter 2nd string:\n");
  gets(str1);
  l=strlen(str1);

  for(i=0;str[i+l-1];i++){
        k=i;
     for(j=0;j<=l-1;j++){
        if(str[k]!=str1[j])
           break;
             k++;
     }
     if(j==l)
        count++;
  }
   printf("value is %d",count);


    return 0;
}
