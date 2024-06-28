#include <stdio.h>
int getint();
main() {
    int inp=0;
    inp = getint();
    printf("\nYou've entered %d", inp);

}
int getint()
{
    int num=0, ch;
    do {
        ch = getchar();
        if(ch>=48 && ch<=57) {
            printf("%c",ch);
            num= num*10 + (ch-48);
        }
        if(ch==13)
            break;
    } while(1);
    return (num);
}

