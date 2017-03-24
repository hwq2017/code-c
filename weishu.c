#include <stdio.h>

int main(void)
{
    int a ;
    int i = 0;
    printf("Please input a number:\n");
    scanf("%d", &a);
    do{
        a /= 10;
        i++;
    }while(a > 0);
    printf("i = %d\n", i);
    return 0;
}
