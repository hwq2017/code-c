#include <stdio.h>

int main(void)
{
    int i;
    double sum = 0;
    double mul = 1;
    for(i = 1; i <= 10; i++)
    {
        mul = mul * i;
        sum = sum + mul;
    }
    printf("sum = %e\n", sum);
    return 0;
}
