#include <stdio.h>

int main(void)
{
    int a ;
    printf("Please input a four digit number:\n");
    scanf("%d", &a);
    int a1,a2,a3,a4;
    a1 = a % 10;
    a2 = (a / 10) % 10;
    a3 = (a / 100) % 10;
    a4 = a / 1000;
    printf("这个四位数的个、十、百、千位分别是:%d,%d,%d,%d\n", a1, a2, a3, a4);
    return 0;
}
