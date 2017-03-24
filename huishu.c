#include <stdio.h>

int main(void)
{
    int i, a1, a2, a3, a4, a5;
    for(i = 10000; i <= 99999; i++)
    {
         a1 = i % 10;
         a2 = (i / 10) % 10;
         a3 = (i / 100) % 10;
         a4 = (i / 1000) % 10;
         a5 = i / 10000;
         if((a1 == a5) && (a2 == a4))
         {
             printf("%d\n", i);
         }
    }

    return 0;
}
