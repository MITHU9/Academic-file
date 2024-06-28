#include <stdio.h>
#include <conio.h>
int main()
{
    int n,rem,binary=0,p=1;
    printf("Enter any number:\n");
    scanf("%d",&n);
    while(n!=0){
        rem=n%2;
        n=n/2;
        binary=binary+(rem*p);
        p=p*10;
    }
    printf("\nBinary value is: %d",binary);

    return 0;
}
