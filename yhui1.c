#include <stdio.h>

int main(void)
{
    int i, j;
    int a[10][10];
    for(i = 0, j = 0; i < 10; i++)
    {
        a[i][j] = 1;
    }
    for(i = 1, j = 1; i < 10, j < 10; i++, j++)
    {
        a[i][j] = 1;
    }
    for(i = 2; i < 10; i++)
    {
        for(j = 1; j <= i; j++)
        {
            a[i][j] = a[i-1][j-1] + a[i-1][j];
        }
    }
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%5d", a[i][j]);
        }
    }
    printf("\n");
}
