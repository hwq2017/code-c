#include <stdio.h>

int main(void)
{
    int a;
    printf("Please input a number:\n");
    scanf("%d", &a);
    if(a == 0)
    {
        printf("0\n");
    }
    else
    {
        while(a != 0)
        {
            printf("%d", a % 10);
            a = a / 10;
         }
    }
    printf("\n");
    return 0;
}
