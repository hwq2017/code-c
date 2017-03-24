#include <stdio.h>

int main(void)
{
    int i, n;
    printf("Please input a number:\n");
    scanf("%d", &n);
    printf("%d = ", n);
    for(i = 2; i < n; )
    {
        if(n % i == 0)
        {
            printf("%d * ", i);
            n /= i;
        }
        else
        {
            i++;
        }
    }
            printf("%d\n", i);
    return 0;
}
