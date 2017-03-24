#include <stdio.h>

int main(void)
{
    int h, m;
    printf("Please input time:\n");
    scanf("%d:%d", &h, &m);
    if(h > 12)
    {
        h = h % 12;
        printf("Hour:Minute= %d:%02dPM\n", h, m);
    }
    else if(h == 12)
    {
        printf("Hour:Minute= %d:%02dPM\n", h, m);
    }
    else
    {
        printf("Hour:Minute= %d:%02dAM\n", h, m);
    }
    return 0;
}
