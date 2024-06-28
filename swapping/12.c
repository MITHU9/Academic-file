#include <stdio.h>
int main()
{
  int rows;
   printf("Enter Rows number:");
   scanf("%d",&rows);

   int row,colspaces,colnum;
   for(row=0;row<rows;row++){
     for(colspaces=rows-row;colspaces>=1;colspaces--){
        printf(" ");
     }

     int printnum=1;
     int num=row;
     int din=1;
     for(colnum=0;colnum<=row;colnum++){
        printf("%d ",printnum);
        printnum= printnum*num;
        printnum= printnum/din;
        din++;
        num--;
     }
     printf("\n");
   }

    return 0;
}
