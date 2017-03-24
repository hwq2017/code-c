#include <stdio.h>

int main(void)
{
    char ch;
    int t = 0;
    ch = getchar();
    while(ch != EOF)
    {
        if(t == 0)
        {
            if(ch == '%')
            {
                t++;
            }
            else
            {
                printf("%c",ch);
                t = 0;
            }
        }
        else if(t == 1)
        {
            if(ch == '2')
            {
                t++;
            }
            else
            {
                printf("%%");
                printf("%c", ch);
                t = 0;
            }
        }
        else if(t == 2)
        {
            if(ch == '0')
            {
                printf(" ");
            }
            else
            {
                printf("%%");
                printf("2");
                printf("%c", ch);
            }
                t = 0;
       }
        ch = getchar();
    }

    return 0;
}
