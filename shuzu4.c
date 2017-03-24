#include <stdio.h>

int main(void)
{
    char ch;
    ch = getchar();
    int zsum = 0, nsum = 0;
    while((ch = getchar()) != EOF)
    {
        if((ch >= 65) && (ch <= 90) || (ch >= 97) && (ch <= 122))
        {
            zsum += 1;
        }
        else if((ch >= 48) && (ch <= 57))
        {
            nsum += 1;
        }
    }
    printf("zsum = %d, nsum = %d\n", zsum, nsum);
    return 0;
}
