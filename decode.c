#include <stdio.h>

int main(void)
{

    char ch;
    char a = ' ', b = ' ';
    while((ch = getchar()) != EOF)
    {
        if(ch == '%')
        {
            ch = getchar();
            if(ch == '2')
            {
                ch = getchar();
                if(ch == '0')
                {
                    printf(" ");
                }
                else
                {
                    printf("I%%");
                    printf("2");
                    printf("%c",ch);
                }
            }
            else
            {
                printf("B%%");
                printf("%c",ch);
            }
        }
        else
        {
            printf("%c",ch);
        }
    }
    return 0;
}
