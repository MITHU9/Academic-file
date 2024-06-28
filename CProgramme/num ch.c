#include <stdio.h>

int main()
{
    char ch1;

    printf("Enter any character: ");
    scanf("%c", &ch1);

    if((ch1 >= 'a' && ch1 <= 'z') || (ch1 >= 'A' && ch1 <= 'Z'))
    {
        printf("'%c' is alphabet.", ch1);
    }
    else if(ch1 >= '0' && ch1 <= '9')
    {
        printf("'%c' is digit.", ch1);
    }
    else
    {
        printf("'%c' is special character.", ch1);
    }

    return 0;
}
