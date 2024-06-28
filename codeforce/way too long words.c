#include<string.h>
int main()
{
   char w[6000];
   int l,n,i;
   scanf("%d",&n);
  for(i=0;i<n;i++)
   {

    scanf("%s",w);
    l=strlen(w);
    if(l>10){
        printf("%c",w[0]);
        printf("%d",l-2);
        printf("%c\n",w[l-1]);
    }
    else
        printf("%s\n",w);

   }

   return 0;
}
