#include <stdio.h>

int main(void)
{
    char ch = 'h';
    ch = getchar();
    while(ch != EOF)
    {
    if('a' <= ch && 'z' >= ch)
    {
        printf("%c", ch-=32);
    }
    else if ('A' <= ch && 'z' >= ch)
    {
        printf("%c", ch+=32);
    }
    else if('0' <= ch && '4' >= ch)
    {
        printf("%c", ch+=5);
    }
    else if('4' < ch && '9' >= ch)
    {
        printf("%c", ch-=5);
    }
    ch = getchar();
    }
   printf("\n");
    return 0;
}
