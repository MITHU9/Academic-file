 #include <stdio.h>
int main()
{
   int n=1;

mithu: if(n>100)
       goto end;
       printf("%d\n",n);
       n++;
       goto mithu;
end:
    printf("All number printed\n");

    return 0;
}

