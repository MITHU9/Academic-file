#include <stdio.h>
int main()
{
  FILE *fp;
  char ch;
  fp = fopen(__FILE__,"r");
  if(fp==NULL){
    printf("Error in file");
  }
  else{
    do
    {
     ch=getc(fp);
     printf("%c",ch);
    }while(ch!=EOF);
    fclose(fp);
  }

  return 0;
}
