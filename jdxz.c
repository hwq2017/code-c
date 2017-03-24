#include <stdio.h>

int main(void)
{
    int i, j, t = 0;
    int a[5] = {21,25,49,25,16};
    for(i = 0; i < 5; i++ )
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;

            }

        }
        printf("%d " ,a[i]);
    }
    printf("\n");
    return 0;
}
