#include <stdio.h>

int main(void)
{
    char str1[15] = "hello";
    char str2[10];
    char *p1;
    char *p2;
    int i = 0;
    for(p1 = str1; *p1 != '\0'; p1++)
    {
        p2 = p1;
        str2[i++] = *p2;
    }
    printf("%s\n",str2);
    return 0;
}
