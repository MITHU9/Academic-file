 #include <stdio.h>
int main()
{
 int n,i;
 printf("Enter the number:");
 scanf("%d",&n);
 for(i=2;i<=n;i++){
    while(n%i==0){
      printf("%d ",i);
      n=n/i;
    }

 }

  return 0;
}
