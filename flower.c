#include <stdio.h>

int main(void)
{
    int a1,a2,a3;
    int i;
    int num;
    for(i = 100; i <= 999; i++)
    {
        a1 = i % 10;
        a2 = (i / 10) % 10;
        a3 = i / 100;
        num = a1*a1*a1+a2*a2*a2+a3*a3*a3;
        if(num == i)
        {
            printf("shui xian hua shu shi:%d\n", num);
        }


    }
    return 0;
}
