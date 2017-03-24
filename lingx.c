#include <stdio.h>

int main(void)
{
    int i, j, a, b, c, d,n;
    printf("Please input a number:\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
            for(a = n - 1; a >= i; a--)
            {
            printf(" ");
            }
            for(b = 1; b <= 2*i - 1; b++)
            {
                printf("*");
            }

        printf("\n");
    }
    for(j = n - 1; j >= 1; j--)
    {
        for(c = n - 1; c >= j; c--)
        {
            printf(" ");
        }
        for(d = 1; d <= 2*j - 1; d++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
