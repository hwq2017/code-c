#include <stdio.h>

int main(void)
{
    int a = 3;
    int b = 4;
    int c = 2;
    printf("%d\n%d\n%d\n", a, b, c);
    int p = 0;
    if(a > b)
    {
        p = a;
    }
    else{
        p = b;
    }
    if(p > c)
    {
        printf("max=%d\n", p);
    }
    else{
        printf("max=%d\n", c);
    }
    return 0;
}
