#include <stdio.h>

int main(void)
{
    int a[5] = {45, 23, 10, 34, 78};
    int i, j;
    for(i = 4; i >= 0; i--)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
