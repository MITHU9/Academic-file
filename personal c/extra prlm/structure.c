#include <stdio.h>
struct book
{
 int bookid;
 char title[20];
 float price;
};
void display(struct book b)
{
  printf("\n %d %s %f",b.bookid,b.title,b.price);
}
struct book input()
{
 struct book b;
 printf("Enter bookid,title and price:");
 scanf("%d",&b.bookid);
 fflush(stdin);
 gets(b.title);
 scanf("%f",&b.price);
 return(b);
}
int main()
{
  struct book b1;
  b1=input();
  display(b1);

 return 0;
}
