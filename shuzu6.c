#include <stdio.h>

int main(void)
{
    int a[5] = {1,3,1,4,1};
    int b[5] = {0};
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = i+1; j < 5; j++)
        {
            if(a[i] == a[j])
            {
               b[i] = 1;
               b[j] = 1;
            }
        }
    }
    for(i = 0; i < 5; i++)
    {
        if(b[i] == 1)
            printf("a[%d] ", i);
    }
    printf("\n");
    return 0;
}
