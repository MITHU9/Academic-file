#include <stdio.h>
int main()
{
    int a,b,H,i;
    printf("Enter Two number:\n");
    scanf("%d %d",&a,&b);
    H=a<b?a:b;

    for(i=H;i>=1;i--){
        if(a%i==0 && b%i==0)
            break;
    }
    printf("\nH.C.F is: %d",i);

    return 0;
}
