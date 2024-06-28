#include<stdio.h>
int main()
{
  int N;
  printf("Enter a year:\n");
  scanf("%d",&N);

  if(N%100==0){
    if(N%400==0)
      printf("Yes\n");
       else
        printf("No\n");
    }
    else{
        if(N%4==0)
            printf("Yes\n");

            else
                printf("No\n");
    }

    return 0;
}
