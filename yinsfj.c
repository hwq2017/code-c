#include <stdio.h>

int main(void)
{
    int i, j, m;
    for(i = 50; i <= 100; i++)
    {
        m = i;
        printf("%d = ", m);
        for(j = 2; j < m;)
        {
           if(m % j == 0)
           {
               printf("%d * ", j);
               m /= j;
           }
           else
           {
               j++;
           }
        }
        printf("%d\n", j);
    }
    return 0;
}
