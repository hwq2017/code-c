#include <stdio.h>
void swap(int *p, int *q);

int main(void)
{
    int a1=3, b1=4;
    int *a, *b;
    a = &a1;
    b = &b1;
    swap(a, b);
    printf("a1 = %d  b1 = %d\n", a1, b1);
    return 0;
}

void swap(int *p, int *q)
{
    int  c;
    c = *p;
    *p = *q;
    *q = c;
}
