#include <stdio.h>

int main(void)
{
    int sum = 0;
    int c = 1;
    int n, j;
    scanf("%d", &n);
    for(j = 1; j <= n; j++)
    {
        c = c * j;
        sum = sum + c;
     }

        printf("sum = %d \n",sum);
    return 0;
}
