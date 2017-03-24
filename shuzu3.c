#include <stdio.h>

int main(void)
{
    int a[5] = {98,56,45,34,23};
    int i, max = 0;
    for(i = 0; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    printf("max = %d\n", max);
    return 0;
}
