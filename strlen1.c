#include <stdio.h>

int main(void)
{
    int count = 0;
    int i;
    char ch[15] = "hello world";
    for(i = 0; ch[i] != '\0'; i++)
    {
         count++;
    }
    printf("%d\n", count);
    return 0;
}
