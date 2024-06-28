#include <stdio.h>
int main()
{
    int x,a,i,p=1;
    printf("Enter base number:");
    scanf("%d",&x);
    printf("Enter base power:");
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        p=p*x;
    }
    printf("power is:%d",p);

    return 0;
}
