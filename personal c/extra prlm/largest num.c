#include <stdio.h>
int main()
{
   int arr[50];
   int i,large,j,limit;
   printf("Enter limit:\n");
   scanf("%d",&limit);
   printf("Enter %d number:\n",limit);

   for(i=0;i<=limit-1;i++){
    scanf("%d",&arr[i]);
   }
   large = arr[0];

   for(j=1;j<=limit-1;j++){
        if(arr[j] > large){
            large=arr[j];
        }

   }
   printf("The largest number is:%d",large);

    return 0;
}
