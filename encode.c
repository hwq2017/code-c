#include <stdio.h>

int main(void)
{
    char ch;
    ch = getchar();
    while(ch != EOF)
    {
        if(ch == ' ')
        {
            printf("%%20");
        }
        printf("%c\n", ch);
        ch = getchar();
    }
    return 0;
}
