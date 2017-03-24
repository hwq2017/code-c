#include <stdio.h>

int main(void)
{
    int a[9] = {1,2,3,3,2,1,1,2,3};
    int b[9] = {0};
    int c[9] = {0};
    int d[9] = {0};
    int i, j;
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 9; j++)
        {
            if(a[i] == a[j])
            {
                if(a[i] == 1)
                {
                    b[i] = 1;
                    b[j] = 1;
                }
                else if(a[i] == 2)
                {
                    c[i] = 2;
                    c[j] = 2;
                }
                else if(a[i] == 3)
                {
                    d[i] = 3;
                    d[j] = 3;
                }
            }
        }
    }
    printf("1 = ");
    for(i = 0; i < 9; i++)
    {
        if(b[i] == 1)
        {
            printf("a[%d],", i);
        }
    }
    printf("\n");
    printf("2 = ");
    for(i = 0; i < 9; i++)
    {
        if(c[i] == 2)
        {
            printf("a[%d],", i);
        }
    }
    printf("\n");
    printf("3 = ");
    for(i = 0; i < 9; i++)
    {
        if(d[i] == 3)
        {
            printf("a[%d],", i);
        }
    }
    printf("\n");
    return 0;
}
