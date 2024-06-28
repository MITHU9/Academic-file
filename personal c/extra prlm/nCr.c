#include<stdio.h>
int main()
{
    int n,r,s=1,i,j=1;
    printf("Enter two value :  ");
    scanf("%d%d",&n,&r);
    for(i=0; i<=(r-1); i++)
    {
        s=s*(n-i);
        j=j*(r-i);
    }
    s=s/j;
    printf("The NCR value is = %d\n",s);

    return 0;
}

