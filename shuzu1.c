#include <stdio.h>

int main(void)
{
    int a[5] = {12,34,23,21,2};
    int i, sum=0;
    for(i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    printf("sum = %d\n", sum);
    return 0;
}
