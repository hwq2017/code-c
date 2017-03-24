#include <stdio.h>

int main(void)
{
    char ch;
    int t = 0;
    while((ch = getchar()) != EOF)
    {
        if(t == 0)
        {
            if(ch == 'a')
            {
                t++;
            }
            else
            {
                printf("%c", ch);
                t = 0;
            }
        }
        else if(t == 1)
        {
            if(ch == 'b')
            {
                t++;
            }
            else if(ch == 'a')
            {
                t = 1;
                printf("a");
            }
            else
            {
                printf("a");
                printf("%c", ch);
                t = 0;
            }
        }
        else if(t == 2)
        {
             if(ch == 'a')
             {
                 t++;
             }
             else
             {
                 printf("a");
                 printf("b");
                 printf("%c", ch);
                 t = 0;
             }
        }
        else if(t == 3)
        {
            if(ch == 'c')
            {
                printf(" ");
            }
            else
            {
                 printf("a");
                 printf("b");
                 printf("a");
                 printf("%c", ch);
            }
                 t = 0;
        }
    }
    return 0;
}
