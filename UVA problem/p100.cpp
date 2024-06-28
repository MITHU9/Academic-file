#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int n,m,i,k,j,count,max;
    while(scanf("%d %d",&n,&m)==2)
    {
        max=0;
        cout<<n<<" "<<m<<" ";
        if(n>m)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=n; i<=m; i++)
        {
            count=1;
            j=i;
            while(j != 1)
            {
                if(j%2==0)
                {
                   j=j/2;
                }

                else
                {
                   j=(3*j)+1;
                }

                count++;
            }

            if(count>=max)
            {
              max=count;
            }

        }

       cout<<max<<endl;
    }

    return 0;
}
