#include <stdio.h>

int main(void)
{
    char ch[10];
    sprintf(ch, "%d", 123);
    printf("%s\n", ch);
    return 0;
}
