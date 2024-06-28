#include<stdio.h>
int main()
{
   int i,l;
   char s[40],ch;
   printf("Enter a string:\n");
   scanf("%s",s);
    for(l=0;s[l];l++);
    for(i=0;i<l/2;i++){
        ch=s[i];
        s[i]=s[l-1-i];
        s[l-1-i]=ch;
    }
    printf("%s",s);

    return 0;
}
