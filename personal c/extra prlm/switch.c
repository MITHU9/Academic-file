#include <stdio.h>
int main()
{
  int a,b,s,choice;
  while(1)
  {
  printf("\n1. Addition");
  printf("\n2. Odd-even");
  printf("\n3. Printing N number");
  printf("\n4. Exit");
  printf("\n\nEnter your choice:");
  scanf("%d",&choice);
  switch(choice)
  {
     case 1:
           printf("Enter two number:");
           scanf("%d%d",&a,&b);
           s=a+b;
           printf("%d",s);
            break;
     case 2:
           printf("Enter any number:");
           scanf("%d",&a);
           if(a%2==0)
            printf("Even number");
           else
            printf("Odd number");
            break;
     case 3:
           printf("Enter any number:");
           scanf("%d",&a);
           for(b=1;b<=a;b++)
              printf(" %d",b);
              break;
     case 4:exit(0);
     default:
          printf("invalid choice.");
  }

  }
  return 0;
}
