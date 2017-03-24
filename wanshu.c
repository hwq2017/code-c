#include <stdio.h>

int main(void)
{
    int i, j;
    int n;
    for(i = 1; i < 1000; i++)
    {
        n = 0;
        for(j = 1; j < i; j++)
        {
            if(i % j == 0)
            {
                n = n + j;
            }
        }
            if(n == i)
            {
                printf("%d ", n);
            }
    }
    printf("\n");
    return 0;
}
