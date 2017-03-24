#include <stdio.h>

int main(void)
{
    int i;
    int s = 0;
    for(i = 10;i >= 1;i--)
    {
        s = (s + 1) * 2;
    }
    
    printf("sum = %d\n", s);
    return 0;
}
