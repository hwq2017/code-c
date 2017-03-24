#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,1,1};
    int b[5];
    int i, j, n;
    n =1; 
    for(i = 0; i < 5; i++)
    {
        if(n == a[i])
        {
           printf("a[%d] ", i) ;
        }
    }
    printf("\n");
    return 0;
}
