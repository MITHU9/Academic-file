#include<stdio.h>
int main()
{
    int n,i,p;
    printf("input number:");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {

        if(n%i==0)
        {
            if(i%2!=0)
                p=0;
        }
        else if(i%2==0)
        {
            p=1;
        }

    }

    return 0;
}
