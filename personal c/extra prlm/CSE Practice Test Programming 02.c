#include<stdio.h>
#include<stdlib.h>

main()
{
  int m,n,i,j,count=0;
  printf("Main String Length: ");
  scanf("%d",&m);
  printf("Sub String Length: ");
  scanf("%d",&n);

  char A[m],B[n];
  //A=(char*) malloc (m*sizeof(char));
 // B=(char*) malloc (n*sizeof(char));
  printf("Main String:");
  scanf("\n",&A);
  gets(A);
  printf("Sub String:");
  scanf("\n",&B);
  gets(B);

 for(i=j=0;A[i];i++)
  {
    if(A[i]==B[j])
        j++;
    else if(A[i]==B[0])
        j=1;
    else
        j=0;

    if(B[j]=='\0')
    {
     count++;
        j=0;
    }

  }
  printf("Number of substring:%d",count);


  return 0;
}
