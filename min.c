#include <stdio.h>

int main(void)
{
    int a = 1, b = 3, c = 12;
    printf("%d,%d,%d\n", a, b, c);
    int d = 0;
    if(a < b)
    {
        d = a;
    }
    else
    {
        d = b;
    }
   if(d < c)
    {
        printf("min=%d\n", d);
    }
   else
   {
       printf("min=%d\n", c);
   }
    return 0;
}
