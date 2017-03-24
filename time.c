#include <stdio.h>

int main(void)
{
    int h, m;
    printf("Please input time:\n");
    scanf("%d:%d", &h, &m);
    if(h == 24)
    {
        h = h % 12;
        if(m < 10)
        {
            printf("Hour : Minute =%d:0%dAM\n", h, m);
        }
        if(m>10)
        {
            printf("Hour : Minute =%d:%dAM\n", h, m);
        }
    }
    else if((12 < h) && (h < 24))
    {
        h = h % 12;
        if(m < 10)
        {
            printf("Hour : Minute =%d:0%dPM\n", h, m);
        }
        else
        {
            printf("Hour : Minute =%d:%dPM\n", h, m);
        }
    }
    else if(h == 12)
    {
        if(m < 10)
        {
            printf("Hour : Minute =%d:0%dPM\n", h, m);
        }
        else
        {
            printf("Hour : Minute =%d:%dPM\n", h, m);
        }
    }
    else
    {
        if(m < 10)
        {
            printf("Hour : Minute =%d:0%dAM\n", h, m);
        }
        else
        {
            printf("Hour : Minute =%d:%dAM\n", h, m);
        }
    }
    return 0;
}
